#include <iostream>
const long long N = 1 << 5;
long long w[N][N][N];
long long W(long long a, long long b, long long c)
{
	if (a <= 0 || b <= 0 || c <= 0)
		return 1;
	if (a > 20 || b > 20 || c > 20)
		return w[20][20][20];
	if (a < b && b < c)
		return w[a][b][c - 1] + w[a][b - 1][c - 1] - w[a][b - 1][c];
	return w[a - 1][b][c] + w[a - 1][b - 1][c] + w[a - 1][b][c - 1] - w[a - 1][b - 1][c - 1];
}
int main()
{
	for (long long i = 0; i <= 20; ++i)
		for (long long j = 0; j <= 20; ++j)
			for (long long k = 0; k <= 20; ++k)
				w[i][j][k] = W(i, j, k);
	long long a, b, c;
	std::cin >> a >> b >> c;
	for (;; std::cin >> a >> b >> c)
		if (a == -1 && b == -1 && c == -1)
			break;
		else
			std::cout << "w(" << a << ", " << b << ", " << c << ") = " << W(a, b, c) << std::endl;
}
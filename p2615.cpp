#include <iostream>
using namespace std;

int vf[39][39];
int main()
{
    int N;
    cin >> N;
    int x = N / 2, y = 0;
    vf[y][x] = 1;

    for (int i = 2; i <= N * N; i++)
    {
        if (y == 0 && x != N - 1)
        {
            x += 1;
            y = N - 1;
            vf[y][x] = i;
        }
        else if (x == N - 1 && y != 0)
        {
            x = 0;
            y -= 1;
            vf[y][x] = i;
        }
        else if (x == N - 1 && y == 0)
        {
            y++;
            vf[y][x] = i;
        }
        else if (x != N - 1 && y != 0)
        {
            if (!vf[y - 1][x + 1])
            {
                y--, x++;
                vf[y][x] = i;
            }
            else
            {
                y++;
                vf[y][x] = i;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << vf[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
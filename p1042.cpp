#include <iostream>
#include <string>
#include <math.h>
using namespace std;

char win[62503];
int main()
{
    int i = 0;
    while (1)
    {
        cin >> win[i];
        if (win[i] == 'E')
            break;
        else
            i++;
    }

    int w = 0, l = 0;
    for (int t = 0; t < i; t++)
    {
        if (w >= 10 && l >= 10 && abs(w - l) >= 2)
        {
            cout << w << ":" << l << endl;
            w = 0;
            l = 0;
        }
        else if (w == 11 && l <= 9)
        {
            cout << w << ":" << l << endl;
            w = 0;
            l = 0;
        }
        else if (l == 11 && w <= 9)
        {
            cout << w << ":" << l << endl;
            w = 0;
            l = 0;
        }
        if (win[t] == 'W')
            w++;
        else
            l++;
    }
    cout << w << ":" << l << endl;
    cout << endl;

    w = 0, l = 0;
    for (int t = 0; t < i; t++)
    {
        if (w >= 20 && l >= 20 && abs(w - l) >= 2)
        {
            cout << w << ":" << l << endl;
            w = 0;
            l = 0;
        }
        else if (w == 21 && l <= 19)
        {
            cout << w << ":" << l << endl;
            w = 0;
            l = 0;
        }
        else if (l == 21 && w <= 19)
        {
            cout << w << ":" << l << endl;
            w = 0;
            l = 0;
        }
        if (win[t] == 'W')
            w++;
        else
            l++;
    }
    cout << w << ":" << l << endl;
    return 0;
}
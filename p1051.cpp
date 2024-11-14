#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;
    string maxName;
    int sum = 0, max = 0;

    for (int i = 0; i < k; i++)
    {
        string name;
        cin >> name;
        int gpa, ban, lunwen, money = 0;
        char ganbu, xibu;
        cin >> gpa >> ban >> ganbu >> xibu >> lunwen;
        if (ban > 80 && ganbu == 'Y')
            money += 850;
        if (xibu == 'Y' && gpa > 85)
            money += 1000;
        if (gpa > 90)
            money += 2000;
        if (gpa > 85 && ban > 80)
            money += 4000;
        if (gpa > 80 && lunwen > 0)
            money += 8000;

        if (max < money)
        {
            maxName = name;
            max = money;
        }
        sum += money;
    }
    cout << maxName << endl
         << max << endl
         << sum << endl;
    return 0;
}
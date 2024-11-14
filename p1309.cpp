#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
int N, R, Q;
int score[200001], power[200001], people[200001];
int winner[100001];
int losser[100001];

bool cmp(int a, int b)
{
    return score[a] > score[b];
}

void merge2()
{
    int i = 0, j = 0, k = 0;
    while (i < N && j < N)
    {
        if (score[winner[i]] > score[losser[j]])
        {
            people[k++] = winner[i];
            i++;
        }
        else if (score[winner[i]] == score[losser[j]])
        {
            if (winner[i] < losser[j])
            {
                people[k++] = winner[i++];
            }
            else
            {
                people[k++] = losser[j++];
            }
        }
        else
        {
            people[k++] = losser[j];
            j++;
        }
    }
    if (i < N)
    {
        for (int t = k; t < 2 * N; t++, k++)
        {
            people[k] = winner[i++];
        }
    }
    else
    {
        for (int t = k; t < 2 * N; t++, k++)
        {
            people[t] = losser[j++];
        }
    }
}

int main()
{

    cin >> N >> R >> Q;

    for (int i = 0; i < 2 * N; i++)
    {
        cin >> score[i];
    }
    for (int i = 0; i < 2 * N; i++)
    {
        cin >> power[i];
    }
    for (int i = 0; i < 2 * N; i++)
    {
        people[i] = i;
    }

    sort(people, people + 2 * N, cmp);

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < 2 * N; j += 2)
        {
            if (power[people[j]] > power[people[j + 1]])
            {
                winner[j / 2] = people[j];
                score[winner[j / 2]]++;
                losser[j / 2] = people[j + 1];
            }
            else
            {
                winner[j / 2] = people[j + 1];
                score[winner[j / 2]]++;
                losser[j / 2] = people[j];
            }
        }
        merge2();
    }

    cout << people[Q - 1] + 1;
    return 0;
}
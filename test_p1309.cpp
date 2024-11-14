#include <iostream>
#include <cassert>
using namespace std;

extern int N;
extern int score[200001], people[200001];
extern int winner[100001];
extern int losser[100001];

void merge2();

void test_merge2()
{
    // Test case 1
    N = 3;
    int test_score1[] = {5, 3, 8, 6, 7, 2};
    int test_winner1[] = {2, 4, 0};
    int test_losser1[] = {3, 1, 5};
    int expected_people1[] = {2, 4, 0, 3, 1, 5};

    copy(begin(test_score1), end(test_score1), score);
    copy(begin(test_winner1), end(test_winner1), winner);
    copy(begin(test_losser1), end(test_losser1), losser);

    merge2();

    for (int i = 0; i < 2 * N; i++)
    {
        assert(people[i] == expected_people1[i]);
    }

    // Test case 2
    N = 2;
    int test_score2[] = {10, 20, 30, 40};
    int test_winner2[] = {3, 2};
    int test_losser2[] = {1, 0};
    int expected_people2[] = {3, 2, 1, 0};

    copy(begin(test_score2), end(test_score2), score);
    copy(begin(test_winner2), end(test_winner2), winner);
    copy(begin(test_losser2), end(test_losser2), losser);

    merge2();

    for (int i = 0; i < 2 * N; i++)
    {
        assert(people[i] == expected_people2[i]);
    }

    cout << "All test cases passed!" << endl;
}

int main()
{
    test_merge2();
    return 0;
}
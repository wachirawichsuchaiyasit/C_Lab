#include <iostream>
#include <vector>
using namespace std;

vector<int> compareTriplets(vector<int> arrA, vector<int> arrB)
{
    vector<int> score(2, 0);

    for (int i = 0; i < 3; ++i)
    {
        if (arrA[i] == arrB[i])
        {
            continue;
        }

        if (arrA[i] > arrB[i])
        {
            score[0] += 1;
        }
        else
        {
            score[1] += 1;
        }
    }

    return score;
}

int main()
{
    int n = 3;
    vector<int> arrA(n), arrB(n);

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        arrA[i] = temp;
    }

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        arrB[i] = temp;
    }

    vector<int> result = compareTriplets(arrA, arrB);

    for (size_t i = 0; i < result.size(); ++i)
    {
        cout << result[i];
        if (i != result.size() - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
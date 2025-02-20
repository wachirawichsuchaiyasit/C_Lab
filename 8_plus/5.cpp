#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void miniMaxSum(vector<int> arr, long *minSum, long &maxSum)
{

    sort(arr.begin(), arr.end());

    *minSum = 0;
    for (int i = 0; i < 4; ++i)
    {
        *minSum += arr[i];
    }

    maxSum = 0;
    for (int i = arr.size() - 4; i < arr.size(); ++i)
    {
        maxSum += arr[i];
    }
}

int main()
{
    int n = 5;
    long min, max;
    vector<int> ar;

    for (int i = 0; i < n; ++i)
    {
        long temp;
        cin >> temp;
        ar.push_back(temp);
    }

    miniMaxSum(ar, &min, max);
    cout << min << " " << max << endl;
    return 0;
}
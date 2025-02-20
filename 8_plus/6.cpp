#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int birthdayCakeCandles(vector<int> candles)
{
    if (candles.size() < 0)
    {
        return 0;
    }

    sort(candles.begin(), candles.end());

    int max = candles[0];
    int couter = 0;
    for (int i = candles.size() - 1; i >= 0; --i)
    {
        if (candles[i] > max)
        {
            max = candles[i];
            couter = 1;
        }
        else if (candles[i] == max)
        {
            couter += 1;
        }
    }

    return couter;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        ar[i] = temp;
    }

    int result = birthdayCakeCandles(ar);
    cout << result << endl;
    return 0;
}
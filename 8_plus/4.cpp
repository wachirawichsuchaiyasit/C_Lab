#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdio>
using namespace std;

void signedRatio(vector<int> arr)
{
    int size = arr.size();
    float positive_ctn = 0;
    float nagative_ctn = 0;
    float zero = 0;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == 0)
        {
            zero += 1;
        }
        else if (arr[i] > 0)
        {
            positive_ctn += 1;
        }
        else if (arr[i] < 0)
        {
            nagative_ctn += 1;
        }
    }

    cout << fixed << setprecision(6);
    cout << positive_ctn / size << endl;
    cout << nagative_ctn / size << endl;
    cout << zero / size << endl;
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

    signedRatio(ar);
    return 0;
}
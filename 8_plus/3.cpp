#include <iostream>
#include <vector>
using namespace std ;

int diagonalDifference(vector<vector<int> > arr) {
    if (arr.size() <= 0 ) return 0 ; 

    int a = 0 ;
    int b = 0 ; 
    int result = 0 ;
    
    for (int i = 0 ; i < arr.size() ; ++ i ) {
        a += arr[i][i] ;
        b += arr[i][(arr.size()-1) - i];
    }

    result =  ( a - b  ) ; 

    if (result < 0) {
        result =  - ( a - b );
    }

    return result ;
}


int main() {
    int n;
    cin >> n;
    vector<vector<int> > arr(n);

    for (int i = 0; i < n; ++i) {
        arr[i].resize(n);
        for (int j = 0; j < n; ++j) {
            int temp;
            cin >> temp;
            arr[i][j] = temp;
        }
    }

    int result = diagonalDifference(arr);
    cout << result << endl;
    return 0;
}
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void rowSum(int arr[][4], int row, int col) {
    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j =0; j<col; j++) {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i+1 << ": " << sum << endl;
    }
}


int main() {
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int target;

    for(int i=0; i<3; i++) {
        for(int j =0; j<4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
    rowSum(arr, 3, 4);

    return 0;
}
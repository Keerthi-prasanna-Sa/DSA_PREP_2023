#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int MaxRowSum(int arr[][4], int row, int col) {
    int max_sum = INT_MIN;
    int large_row;
    for(int i=0; i<row; i++) {
        int curr_sum = 0;
        for(int j =0; j<col; j++) {
            curr_sum += arr[i][j];
        }
        if (max_sum < curr_sum) {
            max_sum = curr_sum;
            large_row = i;
        }
    }
    return large_row;
}


int main() {
    int arr[3][4] = {1,0,12,1,5,45,7,8,9,4,11,52};
    int max_row;

    for(int i=0; i<3; i++) {
        for(int j =0; j<4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
    max_row = MaxRowSum(arr, 3, 4);

    cout << "The row with max sum is " << max_row+1 << endl;

    return 0;
}
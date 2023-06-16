#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void wavePrint(int arr[][3], int row, int col) {
    for(int j=0; j<col; j++) {
        if (j%2 == 0) {
        for(int i=0; i<row; i++) {
            cout << arr[i][j] << " ";
        }}
        else {
        for(int i=row-1; i>=0; i--) {
            cout << arr[i][j] << " ";
        }}
        cout << "\n";
    }
}

int main() {
    int arr[3][3] = {0,1,2,3,4,5,6,7,8};
    wavePrint(arr, 3, 3);
    return 0;
}
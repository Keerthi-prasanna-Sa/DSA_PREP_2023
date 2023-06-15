#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j =0; j<col; j++) {
            if(arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
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
    
    cout << "Enter the element to be searched: " << endl;
    cin >> target;

    bool res = isPresent(arr, target, 3, 4);

    if(res == true) {
        cout << "The element is present" << endl;
    }
    else {
        cout << "The element is not present" << endl;
    }
    return 0;
}
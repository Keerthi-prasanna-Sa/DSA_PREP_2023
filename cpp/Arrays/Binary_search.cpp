#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool binarySearch(int arr[], int length, int target) {
    int left = 0;
    int right = length-1;
    cout << left << " " << right <<"\n";
    while (left <= right) {
        int mid = (left+right)/2;
        cout << mid << "\n";
        cout << left << " " << right <<"\n";
        if (arr[mid] == target) {
            return true;
        }
        else if (arr[mid] < target) {
            left = mid+1;
        }
        else if (arr[mid] > target) {
            right = mid-1;
        }
    }
    return false;
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(arr)/sizeof(int);
    int target;
    cout << "Enter the element to be searched: " << endl;
    cin >> target;

    binarySearch(arr, length, target) ? cout << "Target found." : cout << "Target not found.";
    
    return 0;
}
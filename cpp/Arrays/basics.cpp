#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(arr)/sizeof(int);
    int target;
    cout << "Enter the element to be searched: " << endl;
    cin >> target;
    for(int i=0; i < length; i++) {
        if (arr[i] == target) cout << "Target found." << endl;
    }
    return 0;
}
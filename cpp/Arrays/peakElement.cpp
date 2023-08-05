#include <iostream>
#include <climits>
using namespace std;

int getPeak(int nums[], int s, int e) {
    int m =s + (e-s)/2;

    if (s==e){
        return s;
    }
    else if (nums[m] < nums[m+1]) {
        getPeak(nums, m+1, e);
    }
    else {
        getPeak(nums, s, m);
    }
    
}

int main() {
    int size, nums[100];
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    cout << "Enter the elements of the array with space in between: " << endl;
    for(int i=0; i < size; i++){
        cin >> nums[i];
    }
    int s = 0;
    int e = size-1;
    int peak = getPeak(nums, s, e);
    cout << peak << "\n"; 
}
#include <iostream>
using namespace std;

bool LinearSearch(int nums[], int size, int key) {
    for(int i=0; i<size; i++){
        if (nums[i] == key) {
            return true;
        }
    }
    return false;
}

int main() {
    int size, key, nums[100];
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    cout << "Enter the elements of the array with space in between: " << endl;
    for(int i=0; i < size; i++){
        cin >> nums[i];
    }
    cout << "Enter the element to search: " << endl;
    cin >> key;

    if (LinearSearch(nums, size, key) == 1) {
        cout << "Element available in the array" << endl;
    }
    else {
        cout << "Element not available in the array" << endl;
    } 
}
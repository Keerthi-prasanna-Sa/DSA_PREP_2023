#include <iostream>
using namespace std;

/*C++ does not allow to return an entire array as an argument to a function. 
However, you can return a pointer to an array by specifying the array's name 
without an index.*/

int * ReversingArray(int nums[], int size) {
    int start = 0;
    int end = size-1;
    while (start<=end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
    return nums;
}

int main() {
    int size, nums[100];
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    cout << "Enter the elements of the array with space in between: " << endl;
    for(int i=0; i < size; i++){
        cin >> nums[i];
    }
    int *reversedNums = ReversingArray(nums, size);
    for(int i=0; i<size; i++){
        cout << *(reversedNums + i) << " "; 
    }
    cout << endl;
}
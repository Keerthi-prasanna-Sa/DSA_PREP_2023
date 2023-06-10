#include <iostream>
#include <climits>
using namespace std;

int getMax(int nums[], int size) {
    int max = INT_MIN;
    for(int i=0; i<size; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    return max;
}

int getMin(int nums[], int size) {
    int min = INT_MAX;
    for(int i=0; i<size; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    return min;
}

int main() {

    int size;
    cin >> size;

    int nums[100];

    for(int i=0; i < size; i++){
        cin >> nums[i];
    }

    cout << "Max element in the nums is " << getMax(nums, size) << endl;
    cout << "Min element in the nums is " << getMin(nums, size) << endl;
}
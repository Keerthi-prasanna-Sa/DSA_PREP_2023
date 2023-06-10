#include <iostream>
using namespace std;

/*This Program is just to understand the flow of program and how passing by value is 
different from passing by reference*/

void update(int arr[], int n){
    arr[0] = 10;
    cout << "Printing from update function " << endl;
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " " << endl;
    }
    cout << "Going back to main function " << endl;
}

int main(){
    int arr[3] = {1,2,3};
    update(arr, 3);
    cout << "Printing in main function " << endl;
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " " << endl;
    }
}
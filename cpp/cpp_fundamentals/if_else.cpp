#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // int age;
    // cout << "Enter your age : ";
    // cin >> age;
    // if (age>=18) cout << "You are an adult." << "\n";
    // else cout << "You are not an adult" << "\n";
    int marks;
    cout << "Enter your marks: " << "\n";
    cin >> marks;
    if (marks >= 80) cout << "You got A Grade!" << "\n";
    else if (marks >= 60) cout << "You got B Grade." << "\n";
    else if (marks >= 50) cout << "You got C Grade." << "\n";
    else if (marks >= 45) cout << "You got D Grade." << "\n";
    else if (marks >= 25) cout << "You got E Grade." << "\n";
    else cout << "You got F Grade." << "\n";
    return 0;
}
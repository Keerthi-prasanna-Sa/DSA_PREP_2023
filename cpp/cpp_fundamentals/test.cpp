#include <iostream>
using namespace std;

int main()
{
    // int a,b,c;
    // cout << "Enter the 1st variable" << endl;
    // cin >> a;
    // cout << "Enter the 2nd variable" << endl;
    // cin >> b;
    // c = a+b;
    // cout << "The result of the addition is " << c << endl;
    string firstName, lastName, fullName;
    cout << "Enter the First Name" << endl;
    cin >> firstName;
    cout << "Enter the Last Name" << endl;
    cin >> lastName;
    fullName = firstName + " " + lastName;
    cout << "Your Full name is " << fullName << "." << endl;

}
#include<iostream>
using namespace std;

int main ()
{
    int num ;
    cout << "The number is : \n";
    cin >> num;
    //Conditions to check if number is positive or negative
    if (num > 0)
        cout << "The number is positive ";
    else if (num < 0)
        cout << " the numbsr is negative";
    else 
        cout <<"zero";

        return 0;
}

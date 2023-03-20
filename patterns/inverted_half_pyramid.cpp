#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Please Enter N for Inverted Half Pyramid: ";
    cin >> n; // takes number of rows as input from user
    for(int i = n; i >= 1; i--) // runs loop till it reaches last row
    {
        for(int j = 1; j <= i ; j++) // loop to print n stars on n row
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
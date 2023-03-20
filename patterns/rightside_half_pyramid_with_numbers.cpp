#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter N to print right-side Half Pyramid with numbers: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(j <= i)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
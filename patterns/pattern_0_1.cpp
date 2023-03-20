#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter N to find out the 0-1 Pattern: ";
    cin >> n;
    for(int i  = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j <= i)
            {
                if ((i + j) % 2 == 0)
                {
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
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
#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n){
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements into array: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr , n);
    cout << "Array Sorted using Bubble Sort: " << endl;
    for(int i = 0; i < n ; i++)
    {
        cout << arr[i] << endl;
    }
}
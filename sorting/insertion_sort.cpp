#include <iostream>

using namespace std;

void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while(arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Plesae enter " << n << " array elements to sort: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertion_sort(arr, n);
    cout << "Here is the Array sorted using Insertion sort: " << endl;
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << endl;
    }
    return 0;
}
#include<iostream>

using namespace std;

linearsearch(int arr[], int key, int n){
    for(int i = 0; i <= n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element " << key << " found at index number "<< i << " which is number " << i + 1 << " in Array";
            return 0;
        }
    }
    return -1;
}

int main(){
    int key, n;
    cout << "Enter the elements you want to store in Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the " << n << " Array Elements: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Key Element you want to find: ";
    cin >> key;
    linearsearch(arr , key, n);
    return 0;
}
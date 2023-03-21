/*Only works when the Input Vector is sorted in ascending order*/

#include<iostream>
#include<vector>

using namespace std;

int binarysearch(vector<int>& vec, int key, int n){
    int low, high, mid;
    low = 0;
    high = n - 1;
    mid = low + (high - low) / 2; /* we are not using simple "(high + low) / 2" formula to avoid integer overflow (INT_MAX || INT_MIN) i.e capped at 2^31 - 1*/
    while(low <= high){
        if(vec[mid] == key) {
            cout << "Element " << key << " found at index number "<< mid << " which is number " << mid + 1 << " in Vector";
            return 0;
        }
        else if(vec[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
        mid = low + (high - low) / 2;
    }
    cout << "Element not found";
}

int main(){
    int key, n;
    cout << "Enter the number of elements you want to store in Vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the " << n << " Vector Elements: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    cout << "Enter Key Element you want to find: ";
    cin >> key;
    binarysearch(vec, key, n);
    return 0;
}
/*sorts in ascending order*/
#include <iostream>

using namespace std;

void selection_sort(int arr[], int n){
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j])  /*change ">"(greater than) to "<"(less than) to sort in descending order */
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }   
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Plesae enter " << n << " array elements to sort: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    selection_sort(arr, n);
    cout << "Here is the Array sorted using selection sort: " << endl;
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << endl;
    }
    return 0;
}

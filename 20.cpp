//Find More than One Duplicate element in the Array. --> Sorted Array.
#include<iostream>
using namespace std;
int main() {
    int n = 10;
    int arr[n] = {1,1,2,2,2,3,4,4,5,5};
    cout << "Original Array : ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    for(int i = 0; i < n-1; i++) {
        if(arr[i] == arr[i+1]) {
            int j = i + 1;
            while(j < n && arr[j] == arr[i]) j++;
            cout << arr[i] << " is appearing " << j - i << " times." << endl;
            i = j - 1;
        }
    }
    return 0;
}
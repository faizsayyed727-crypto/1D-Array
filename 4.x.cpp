//Find Minimum Value in the Given Array.
#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cout << "Enter Element " << i + 1 << " = ";
        cin >> arr[i];
    }
    int min = INT_MAX;
    for(int i = 0 ; i < n ; i++) {
        if(min > arr[i]) {
            min = arr[i];
        }
    }
        cout << "Minimum Value in the Array is : " << min;
}
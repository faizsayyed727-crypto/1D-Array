// Reverse all Elements in the Array.
// Number = arr[i] , Reverse = brr[(n-1)-i]
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int arr[n] , brr[n];
    cout << "Enter Elements of the Array : " << endl;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    cout << "Reverse of the Given Array is : ";
    for(int i = 0 ; i < n ; i++){
        brr[i] = arr[n - i - 1];
        cout << brr[i] << " ";
    }
}
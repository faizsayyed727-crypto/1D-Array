// Reverse some Elements in the Array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int arr[n] , brr[n];
    int x , y;
    cout << "Enter First Index : ";
    cin >> x;
    cout << "Enter Second Index : ";
    cin >> y;
    cout << "Enter Elements of the Array from index x to y : " << endl;
    for(int i = x ; i < y ; i++){
        cin >> arr[i];
    }
    cout << "Reverse of the Given Array is : ";
    for(int i = x ; i < y ; i++){
        brr[i] = arr[n - i - 1];
        cout << brr[i] << " ";
    }
}
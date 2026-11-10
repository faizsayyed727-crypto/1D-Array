//Find Sum of all Elements in the Given array 
//Take Input of number of Elements from the User.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cout << "Enter Element " << i + 1 << " = ";
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
    }
    cout << "Sum of all Elements present in the Array is : " << sum;
}
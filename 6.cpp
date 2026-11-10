//Given an Array of integers.Change its Value of odd indexes to its second multiple
//And make a increment in all Even indexes by 10. //Using functions
#include<iostream>
using namespace std;
void fun(int arr[] , int n){
    for (int i = 0; i < n; i++) { 
        if (i % 2 == 0) arr[i] += 10; //even indexes
        else arr[i] *= 2; // odd indexes
    }
}
int main(){
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " Elements of the Array : " << endl;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    cout << "Values after operation :" << endl;
    fun(arr , n);
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << endl;
    }
}
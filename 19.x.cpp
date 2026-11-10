//Rotate k elements Left-Side in Array 
//such that k may be greater than n(size of the array).
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverse(int arr[] , int si , int ei){
    for(int i = si , j = ei ; i < j ; i++ , j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

void rotateLeft(int arr[] , int n , int k){
    k = k % n;
    //1. reverse first k elements
    reverse(arr , arr + k);
    //2. reverse remaining elements
    reverse(arr + k , arr + n);
    //3. reverse entire array
    reverse(arr , arr + n);
}
int main(){
    int n =10;
    int arr[n] = {1,3,2,5,4,7,9,0,6,11};
    cout << "Original Array : " << endl;
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }

    int k;
    cout << endl << "Enter Number of Times to Rotate an Array : ";
    cin >> k;
    k = k % n;

    rotateLeft(arr , n , k);
    cout << "Array after Rotating " << k << " Times : " << endl;
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
}
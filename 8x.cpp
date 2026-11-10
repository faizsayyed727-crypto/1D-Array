//Find the Absolute Difference between Sum of Elements at Even indexes and Odd indexes.
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
    int sum_Even = 0 , sum_Odd = 0 , diff = 0;
    for(int i = 0 ; i < n ; i++){
        if(i % 2 == 0) sum_Even = sum_Even + arr[i];
        else sum_Odd = sum_Odd + arr[i];
    }
    if(sum_Even > sum_Odd) diff = sum_Even - sum_Odd;
    else diff = sum_Odd - sum_Even;
    cout <<  "Difference between Sum of Elements at Even indexes and Odd indexes : " << diff;
}
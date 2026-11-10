//Find the Difference between Sum of Elements at Even indexes and Odd indexes.
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
    int sum_Even = 0 , sum_Odd = 0;
    for(int i = 0 ; i < n ; i++){
        if(i % 2 == 0) sum_Even = sum_Even + arr[i];
        else sum_Odd = sum_Odd + arr[i];
    }
    int diff = sum_Even - sum_Odd;
    cout <<  "Difference between Sum of Elements at Even indexes and Odd indexes : " << diff;
}
//Find Maximum Value in the Given Array.
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
    int max = arr[0];
    for(int i = 0 ; i < n ; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "Maximum Value in the Array is : " << max;
}
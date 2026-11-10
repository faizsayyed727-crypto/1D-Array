//Print the Second Largest Value in the Array using 2 loop.
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
    int max = arr[0] , smax = arr[0];  //First Index
    for(int i = 0 ; i < n ; i++){
        if(max < arr[i]) max = arr[i];
    }
    for(int j = 0 ; j < n ; j++){
        if(arr[j] != max && smax < arr[j]) smax = arr[j];
    }
    cout << "Maximum Value in the Array is : " << max  << endl;
    cout << "Second Maximum Value in the Array is : " << smax;
}
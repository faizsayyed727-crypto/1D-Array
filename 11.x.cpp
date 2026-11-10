//Print the Second Largest Value in the Array using 2 loop.
#include<iostream>
#include<climits>
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
    int max = INT_MIN , smax =  INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(max < arr[i]) max = arr[i];
        if(arr[i] != max && smax < arr[i]) smax = arr[i];
    }
    cout << "Maximum Value in the Array is : " << max  << endl;
    cout << "Second Maximum Value in the Array is : " << smax;
}
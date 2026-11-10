//Count the Number of elements in the Given Array Greater than Element x.
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
    int x;
    cout << "Enter the Number : ";
    cin >> x;
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > x) count++;
    }
    cout << "Number of Elements Greater than " << x << " in the Array are " << count << "in count";
}
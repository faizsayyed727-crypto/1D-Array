//Reverse some Elements in the Array.
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
    //swap two numbers logic           #Index Validation.
    if (x >= 0 && y < n && x <= y) {
        for (int i = x, j = y; i < j; i++, j--) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    cout << "Array after Reversing Elements from index " << x << " to " << y << " : ";
    for(int i = 0; i < n ; i++) cout << arr[i];
    }
}
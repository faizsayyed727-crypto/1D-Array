// Searching an Element in the Array from the Reverse.
#include <iostream>
using namespace std;
int main(){
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n, flag = false;
    cout << "Enter a Number to Check if it is Present in the Array or Not : ";
    cin >> n;
    for (int i = 7; i >= 0; i--){
        if (arr[i] == n){
            cout << n << " is present in the Array and its Index is " << i;
            flag = true;
            break;
        }
    }
    if(flag == false) cout << n << " is not present in the Array.";
}
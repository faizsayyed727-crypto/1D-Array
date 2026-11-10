// Searching an Element in the Array from the Start.
#include <iostream>
using namespace std;
int main(){
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n, found = 0;
    cout << "Enter a Number to Check if it is Present in the Array or Not : ";
    cin >> n;
    for (int i = 0; i < 7; i++){
        if (arr[i] == n){
            cout << n << " is present in the Array and its Index is " << i;
            found = 1;
            break;
        }
    }
    if(found == 0) cout << n << " is not present in the Array.";
}
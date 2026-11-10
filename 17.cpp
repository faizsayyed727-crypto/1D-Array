// Find a Duplicate Element from an array of given unique numbers. --> BRUTE FORCE METHOD.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number of Elements : ";
    cin >> n;
    int arr[n];
    cout << endl;

    int i, j;
    for (i = 0; i < n; i++){
        cout << "Enter Element " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << endl;
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if(arr[i] == arr[j]) cout << arr[i] << " is the Duplicate Element.";
        }
    }
    return 0;
}
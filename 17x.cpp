// Find a Duplicate Element from an array of given unique numbers. --> SUM METHOD.
//  Works only when Elements are arranged from 1 to n - 1.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number of Elements : ";
    cin >> n;
    int arr[n];
    cout << endl;

    for (int i = 0; i < n; i++){
        cout << "Enter Element " << i + 1 << " : ";
        cin >> arr[i];
    }

    int total_sum = 0;
    for (int i = 0; i < n; i++){
        total_sum += arr[i];
    }

    int sum = (n - 1) * n / 2;
    int duplicate = total_sum - sum;
    cout << "Duplicate Element is : " << duplicate;
    return 0;
}
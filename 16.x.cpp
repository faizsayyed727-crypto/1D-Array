// Find Missing Number in the Array 1 to n.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int A[n];
    cout << "Enter " << n - 1 << " sorted elements:\n";
    for(int i = 0; i < n - 1; i++) cin >> A[i];
    for(int i = 0; i < n - 2; i++){
        for (int j = A[i] + 1; j < A[i + 1]; j++){
            cout << "Missing Number = " << j << endl;
            break;
        }
    }
    return 0;
}
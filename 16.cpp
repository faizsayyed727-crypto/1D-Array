// Find the Missing Number in the Array of 1 to n. -->Hashing
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;

    int A[n];
    cout << "Enter all Elements in Array from 1 to n "
    << "(With One Element Missing in it) : " << endl;
    for(int i = 0; i < n - 1; i++) cin >> A[i];

    // Hashing Array : -->
    int H[n + 1] = {0};
    int low = A[0];
    int high = A[n];

    for (int i = 0; i < n - 1; i++)
        H[A[i]]++;
    for (int i = low; i < high; i++){
        if (H[i] == 0){
            cout << "Missing Number = " << i;
            break;
        }
    }
}
// Find Missing Number in the Array 1 to n. --> Difference Method
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int A[n];
    cout << "Enter all Elements in Array from 1 to n " << 
    "(With One Element Missing in it) : " << endl;
    for(int i = 0; i < n - 1; i++) cin >> A[i];
    int diff = A[0] - 0;
    for(int i = 0; i < n; i++){
        if (A[i] - i != diff){ 
            cout << "Missing Element is " << diff + i;
            break;
        }
    }
}
// Find Missing Number in the Array 1 to n.
//(SORTED ARRAY WITH A COMMON DIFFERENCE - d).
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;

    int sum = 0 , arr[n - 1];
    cout << "Enter " << n - 1 << " Numbers from 1 to " << n 
    << " (With One Element Missing in it)." << endl;

    for (int i = 0; i < n - 1; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    int expected_sum = n * (n + 1) / 2;
    int missing_number = expected_sum - sum;
    
    cout << "The Missing Number is " << missing_number;
}
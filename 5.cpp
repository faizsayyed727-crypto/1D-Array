//Swap Two Numbers using Arrays and Functions.
#include <iostream>
using namespace std;
void swap(int arr[]) {
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
}
int main() {
    int arr[2];
    cout << "Enter First Number: ";
    cin >> arr[0];
    cout << "Enter Second Number: ";
    cin >> arr[1];
    cout << "\nBefore Swapping:  \n";
    cout << "First Number = " << arr[0] << endl;
    cout << "Second Number = " << arr[1] << endl;
    swap(arr);
    cout << "\nAfter Swapping:  \n";
    cout << "First Number = " << arr[0] << endl;
    cout << "Second Number = " << arr[1] << endl;
    return 0;
}
// Find a Unique Element in the Array. --> Array must contain one unique element.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int arr[n];

    cout << "Enter Elements of the Array : " << endl;
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++){
        bool flag = false;
        for (int j = 0; j < n; j++){
            if (i != j && arr[i] == arr[j]){
                flag = true;
                break;
            }
        }
        // flag == false.
        if (!flag){ // Unique element found
            cout << "Unique Element in the Array is " << arr[i];
            break;
        }
    }
    return 0;
}
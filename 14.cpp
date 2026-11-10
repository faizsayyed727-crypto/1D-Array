//Find a Unique Element in the Array. --> Array must contain one unique element.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    
    int arr[n];
    cout << "Enter Elements of the Array : " << endl;
    for(int i = 0 ; i < n ; i++) cin >> arr[i];

    for(int i = 0 ; i < n ; i++){
        int count = 0; //no element is seen
        for(int j = 0 ; j < n ; j++) if(arr[i] == arr[j]) count++;
        if(count == 1){ //unique element is found
            cout << "Unique Element in the Array is : " << arr[i];
            break;
        }
    }
}
//Find the total Number of Triplets in the Array whose 
//Sum is Equal to given Value of x. Also print those Pairs.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cout << "Enter Element " << i + 1 << " = ";
        cin >> arr[i];
    }
    int x;
    cout << "Enter the Number : ";
    cin >> x;
    int totalTriplets = 0;
    cout << "Triplets in the Array are : " << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){        //Total Number of Unique Pairs
            for(int k = 0 ; k < n ; k++){    
                if(arr[i] + arr[j] + arr[k] == x){
                totalTriplets++;
                cout << arr[i] << " , " << arr[j] << " , " << arr[k];
                cout << endl;
            }
            }
        }
    }
    cout << endl;
    cout << "Total Number of Triplets = " << totalTriplets;
}
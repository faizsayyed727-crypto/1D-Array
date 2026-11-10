//Find the total Number of Unique Pairs in the Array whose 
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
    int totalPairs = 0;
    cout << "Unique Pairs in the Array are : " << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){ //this makes to count only unique pairs.
            if(arr[i] + arr[j] == x){
                totalPairs++;
                cout << arr[i] << " , " << arr[j];
                cout << endl;
            }
        }
    }
    cout << endl;
    cout << "Total Number of Unique Pairs = " << totalPairs;
}
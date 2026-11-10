//Find More than One Duplicate element in the Array. --> HASHING.
#include<iostream>
using namespace std;
int main() {
    int arr[] = {2, 5, 3, 2, 8, 5, 6, 3, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Find maximum element
    int max = arr[0];
    for(int i = 1; i < n; i++) if(arr[i] > max) max = arr[i];
    // Create hash array
    int hash[max + 1] = {0};
    // Store frequencies
    for(int i = 0; i < n; i++) hash[arr[i]]++;
    cout << "Duplicate Elements are:\n";
    for(int i = 0; i <= max; i++) {
        if(hash[i] > 1) cout << i << " is appearing " << hash[i] << " times." << endl;
    }
    return 0;
}
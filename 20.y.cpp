//Find More than One Duplicate element in the Array. 
#include<iostream>
using namespace std;
int main() {
    int arr[] = {2, 5, 3, 2, 8, 5, 6, 3, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n - 1; i++) {
        int count = 1;
        if(arr[i] != -1) {
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1;      // Mark as visited
                }
            }
            if(count > 1) cout << arr[i] << " is appearing " << count << " times." << endl;
        }
    }
    return 0;
}
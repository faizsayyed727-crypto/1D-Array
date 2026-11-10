//Given an Array of marks of 10 students,If marks obtained 
//by student is less than 35 out of 100.
//Print Marks of Student and Roll Number = "Index + 10."
#include<iostream>
using namespace std;
int main(){
    int marks[10];
    cout << "Enter Marks obtained by the Roll Number : " << endl;
    for(int i = 1 ;i <= 10;i++){
        cout << i << " = ";
        cin >> marks[i];
    }
    cout << endl;
    for(int i = 1 ;i <= 10;i++){
        if(marks[i] < 35){
            cout << "Marks obtained by Student whose Roll Number is " << i << " is " << marks[i] << endl;
        }
    }
    cout << endl;
}
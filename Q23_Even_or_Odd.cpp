/*
C++ Program to check a given number is even or odd.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter how many times you want to check: ";
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cout<<"Enter the number to check: ";
        cin>>x;
        if(x%2==0){
            cout<<x<<" is an even number"<<endl;
        }
        else{
            cout<<x<<" is an odd number"<<endl;
        }
    }
}
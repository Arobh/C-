#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cout<<"Enter the number: ";
    cin>>n;
    int temp=n;
    while(n>0){
        count++;
        n=n/10;
    }
    cout<<"The number of digits in the number "<<temp<<" is "<<count;
}
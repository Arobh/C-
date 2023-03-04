/*
Write a program in C++ to find prime factors of a given integer.
*/
#include<iostream>
using namespace std;
void prime_factors(int );
int main(){
    int n,x;
    cout<<"Enter how many times you want to find the prime factors of any number: ";
    cin>>x;
    for(int i=0;i<x;i++){
        cout<<"\nEnter the number: ";
        cin>>n;
        prime_factors(n);
    }

    return(0);
}
void prime_factors(int n){
    int i=3;
    int temp=n;
    while(i<=temp){
        if(n%2==0){
        n=n/2;
        cout<<"2 ";
        }
        else if(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
        else{
            i=i+2;
        }
    }
}
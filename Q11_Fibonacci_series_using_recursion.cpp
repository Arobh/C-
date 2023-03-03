/*
Write a program in C++ to print the Fibonacci series using recursion.
*/
#include<iostream>
using namespace std;
int fibo(int );
int main(){
    int n;
    cout<<"Enter how many terms you want to print the fibonacci series: ";
    cin>>n;
    int i=0;
    while(i<n){
        int x=fibo(i);
        i++;
        cout<<x<<" ";
    }
    
    return(0);
}
int fibo(int n){
    if(n==0){
        return(0);
    }
    else if(n==1){
        return(1);
    }
    else{
        return(fibo(n-1)+fibo(n-2));
    }
}
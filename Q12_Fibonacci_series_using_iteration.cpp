/*
Write a program in C++ to print the Fibonacci series using iteration.
*/
#include<iostream>
using namespace std;
void fibonacci(int );
int main(){
    int n;
    cout<<"Enter how many terms you want to print the fibonacci series: ";
    cin>>n;
    fibonacci(n);

    return(0);
}
void fibonacci(int n){
    if(n>0){
        cout<<"0 ";
        if(n>1){
            cout<<"1 ";
            int a=0;
            int b=1;
            int c;
            int i=2;
            while(i<=n){
                c=a+b;
                a=b;
                b=c;
                cout<<c<<" ";
                i++;
            }
        }
        else
            return;
    }
    else
        return;
}
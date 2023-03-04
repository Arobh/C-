/*
C++ Program to calculate factorial using recursion.
*/
#include<iostream>
using namespace std;
long long int fact(int );
int main(){
    int n;
    cout<<"Enter a number to find the factorial: ";
    cin>>n;
    long long int f=fact(n);
    cout<<"The factorial of "<<n<<" is "<<f;

    return(0);
}
long long int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
/*
C++ Program to calculate factorial using iterative method.
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
    long long int f=1;
    for(int j=n;j>=1;j--){
        f=f*j;
    }
    return(f);
}
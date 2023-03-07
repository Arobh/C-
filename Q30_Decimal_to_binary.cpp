/*
C++ Program to Convert Decimal Number into Binary.
*/
#include<iostream>
using namespace std;
long long int bin(int n){
    long long int b=0;
    int rem,i=1;
    while(n>0){
        rem=n%2;
        b=b+rem*i;
        n=n/2;
        i=i*10;
    }
    return(b);
}
int main(){
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    long long int b=bin(n);
    cout<<"The binary number of "<<n<<" is "<<b;

    return(0);
}
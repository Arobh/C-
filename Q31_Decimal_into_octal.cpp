/*
C++ Program to convert Decimal number to Octal number.
*/
#include<iostream>
using namespace std;
long long int oct(int n){
    long long int o=0;
    int rem,i=1;
    while(n>0){
        rem=n%8;
        o=o+rem*i;
        n=n/8;
        i=i*10;
    }
    return(o);
}
int main(){
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    long long int o=oct(n);
    cout<<"The octal number of "<<n<<" is "<<o;

    return(0);
}
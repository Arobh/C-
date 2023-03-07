/*
C++ Program to calculate the power without using POW function.
*/
#include<iostream>
using namespace std;
int power(int a,int b){
        int result=1;
        for(int i=0;i<b;i++){
            result =result*a;
        }
        return(result);
}
int main(){
    int a,b;
    cout<<"Enter the value of base: ";
    cin>>a;
    cout<<"Enter the value of power: ";
    cin>>b;
    int res=power(a,b);
    cout<<"Power of "<<b<<" on "<<a<<" is "<<res;

    return(0);
}
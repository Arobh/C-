#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a,b,result;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    result=pow(a,b);
    cout<<"Power of "<<a<<"^"<<b<<" is equal to "<<result;

    return(0);
}
/*
C++ program to calculate HCF of given two numbers using recursion.
*/
#include<iostream>
using namespace std;
int hcf(int x,int y){
   if(y==0||x==y){
    return(x);
   }
   else if(x==0){
    return(y);
   }
   else if(y>x){
    return(hcf(x,y%x));
   }
   else{
    return(hcf(x%y,y));
   }
}
int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    int l=hcf(a,b);
    cout<<"HCF of "<<a<<" and "<<b<<" is "<<l;

    return(0);
}
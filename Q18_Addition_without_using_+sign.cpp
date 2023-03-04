/*
Write a program in C++ to add two integer without using arithmetic + operator.
*/
#include<iostream>
using namespace std;
int add_without_plus(int ,int );
int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    int sum=add_without_plus(x,y);
    cout<<"The addition of two numbers, x="<<x<<" and y="<<y<<" is: "<<sum<<endl;
    return(0);
}
int add_without_plus(int a,int b){
    for(int i=0;i<b;i++){
       a++;
    }
    return(a);
}
/*
Write a program in C++ to swap two numbers without using third variable.
*/
#include<iostream>
using namespace std;
void swap(int *,int *);
int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Before Swapping:x = "<<x<<" and y= "<<y<<endl;
    swap(&x,&y);
    cout<<"After Swapping:x = "<<x<<" and y= "<<y<<endl;

    return(0);
}
void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
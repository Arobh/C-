/*
Write a program in C++ to check given number is perfect or not.
*/
#include<iostream>
using namespace std;
int perfect_num(int );
int main(){
    int num;
    cout<<"Enter a number to check whether it is perfect number or not: ";
    cin>>num;
    int x=perfect_num(num);
    if(x==1){
        cout<<num<<" is a perfect number...";
    }
    else{
        cout<<num<<" is not a perfect number...";
    }

    return(0);
}
int perfect_num(int num){
    int i=2,sum=1;
    while(i<num){
        if(num%i==0){
            sum=sum+i;
        }
        i++;
    }
    if(sum==num){
        return(1);
    }
    else{
        return(-1);
    }
}
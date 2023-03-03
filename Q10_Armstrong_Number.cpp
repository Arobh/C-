/*
Write a program in C++ to check whether an integer is Armstrong number or not.
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int temp=n;
    int count=0;
    while(temp>0){
        temp=temp/10;
        count++;
    }
    int sum=0,rem;
    temp=n;
    while(temp>0){
        rem=temp%10;
        sum=sum+pow(rem,count);
        temp=temp/10;
    }
    if(n==sum){
        printf("%d is an Armstrong number...",n);
    }
    else{
        printf("%d is not an Armstrong number...",n);
    }

}
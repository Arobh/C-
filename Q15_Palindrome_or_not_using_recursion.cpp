/*
Write a program in C++ to check whether a number is palindrome or not using recursion.
*/
#include<iostream>
using namespace std;
int palindrome(int );
static int sum=0;
int main(){
    int n;
    cout<<"Enter how many number you want to check whether they are palindrome or not: ";
    cin>>n;
    int i=0;
    while(i<n){
        int x;
        cout<<"\nEnter the number to check: ";
        cin>>x;
        sum=0;
        int num=palindrome(x);
        if(x==num){
        cout<<x<<" is a palindrome...";
        }
        else{
        cout<<x<<" is not an palindrome...";
        }
        i++;
    }
}
int palindrome(int n){
    if(n==0){
        return(0);
    }
    else{
        int rem;
        rem=n%10;
        sum=sum*10+rem;
        palindrome(n/10);
        return(sum);
    }
   
}
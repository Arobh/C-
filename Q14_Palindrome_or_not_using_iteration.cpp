/*
Write a program in C++ to check whether a number is palindrome or not using iteration.
*/
#include<iostream>
using namespace std;
void palindrome(int );
int main(){
    int n;
    cout<<"Enter how many number you want to check whether they are palindrome or not: ";
    cin>>n;
    int i=0;
    while(i<n){
        int x;
        cout<<"\nEnter the number to check: ";
        cin>>x;
        palindrome(x);
        i++;
    }
}
void palindrome(int n){
    int rem,sum=0,temp=n;
    while(temp>0){
        rem=temp%10;
        sum=sum*10 + rem;
        temp=temp/10;
    }
    if(n==sum){
        cout<<n<<" is a palindrome...";
    }
    else{
        cout<<n<<" is not an palindrome...";
    }
}
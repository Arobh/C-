/*
Write a program in C++ to check given number is prime or not.
*/
#include<iostream>
using namespace std;
int prime_no(int );
int main(){
    int n;
    cout<<"Enter how many times you want to check whether the entered number is prime or not:";
    cin>>n;
    int i=0;
    while(i<n){
        int num;
        cout<<"\nEnter the number to check: ";
        cin>>num;
        int x=prime_no(num);
        if(x==0){
            printf("%d is not a prime number...",num);
        }
        else{
            printf("%d is a prime number...",num);
        }
        i++;
    }
    return(0);
}
int prime_no(int num){
        if(num==2){
            return(1);
        }
        else{
            int i=1;
            int count=0;
            while(i<num){
                if(num%i==0){
                    count++;
                }
                i++;
            }
            if(count==1){
                return(1);
            }
            else{
                return(0);
            }
        }
        return(0);
}
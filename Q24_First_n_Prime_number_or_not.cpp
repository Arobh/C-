/*
C++ program to print first n Prime Number.
*/
#include<iostream>
using namespace std;
int prime(int );
int main(){
    int n;
    cout<<"Enter how many prime numbers you want to print:";
    cin>>n;
    int count=0,i=1;
    while(count<n){
        int x=prime(i);
        if(x==1){
            cout<<i<<" ";
            count++;
        }
        i++;
    }
    return(0);
}
int prime(int num){
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
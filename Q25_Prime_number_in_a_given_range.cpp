/*
C Program to print Prime Number in a given range
*/
#include<iostream>
using namespace std;
int prime(int );
int main(){
    int x,y;
    cout<<"Enter the range in which you want to print prime numbers :";
    cin>>x>>y;
    int i=x;
    while(i<=y){
        int z=prime(i);
        if(z==1){
            cout<<i<<" ";
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
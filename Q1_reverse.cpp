#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int rem,sum=0,temp=num;
    while(num>0){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    cout<<"The reverse of "<<temp<<" is "<<sum;

    return(0);
}
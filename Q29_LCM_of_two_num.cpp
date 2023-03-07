/*
C++ program to calculate LCM of given two numbers.
*/
#include<iostream>
using namespace std;
int lcm(int x,int y){
    int max;
    if(x>y){
        max=x;
    }
    else{
        max=y;
    }
    while(true){
        if(max%x==0&&max%y==0){
            return(max);
        }
        max++;
    }
        
}
int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    int l=lcm(a,b);
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<l;

    return(0);
}
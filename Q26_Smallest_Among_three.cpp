/*
C++ Program to find Smallest number among three.
*/
#include<iostream>
using namespace std;
int Smallest(int a,int b,int c){
    if(a<b){
        if(a<c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b<c){
            return b;
        }
        else{
            return c;
        }
    }
}
int main(){
    int x,y,z,min;
    cout<<"Enter three numbers: ";
    cin>>x>>y>>z;
    min=Smallest(x,y,z);
    cout<<"The smallest among three is "<<min;

    return(0);
}
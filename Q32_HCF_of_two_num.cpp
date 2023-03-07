/*
C++ program to calculate HCF of given two numbers.
*/
#include<iostream>
using namespace std;
int hcf(int x,int y){
   int min;
   if(x<y){
    min=x;
   }
   else{
    min=y;
   }
   while(min!=1){
        if(x%min==0&&y%min==0){
            return min;
        }
        min--;
   }
   return(1);
}
int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    int l=hcf(a,b);
    cout<<"HCF of "<<a<<" and "<<b<<" is "<<l;

    return(0);
}
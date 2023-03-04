/*
Write a C++ Program to find the Average of numbers
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter how many numbers you want to find the average: ";
    cin>>n;
    int x,sum=0;
    for(int i=1;i<=n;i++){
        cout<<"Enter "<<i<<" number:";
        cin>>x;
        sum=sum+x;
    }
    float avg=sum/n;
    cout<<"The Average of "<<n<<" numbers is "<<avg;

    return(0);
}
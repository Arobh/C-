#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<"Before Swaping a="<<a<<" and b="<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"After Swaping a="<<a<<" and b="<<b<<endl;

    return(0);
}
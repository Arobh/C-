#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter the dividend: ";
    cin>>num1;
    cout<<"Enter the divisor: ";
    cin>>num2;
    int quo,rem;
    quo=num1/num2;
    rem=num1%num2;
    cout<<"The Quotient obtained is "<<quo<<endl;
    cout<<"The Remainder obtained is "<<rem<<endl;
}
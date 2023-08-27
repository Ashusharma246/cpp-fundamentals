#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"enter the first number :";
    cin>>num1;
    int num2;
    cout<<"enter the second number :";
    cin>>num2;
    
    char op;
    cout<<"what operation you want to perform"<<endl;
    cin>>op;
    switch (op)
    {
    case '+': cout<<(num1+num2)<<endl;
        break;
    case '-': cout<<(num1-num2)<<endl;
        break;
    case '*': cout<<(num1*num2)<<endl;
        break;
    case '/':cout<<(num1/num2)<<endl; 
        break;
    case '%': cout<<(num1%num2)<<endl;
        break;
    default:cout<<"please enter a valid operation ";
        break;
    }
}
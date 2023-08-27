//whethr the given number is positive,negative or zero

#include<iostream>
using namespace std;
void nature(int a){
    if(a<0){
        cout<<"the number is -ve ";
    }
    else if(a>0){
        cout<<"The number is +ve ";
    }
    else
    {
        cout<<"The number is 0" ;
    }
}
int main(){
    int a;
    cout<<"enter the number: ";
    cin>>a;
    nature(a);
    return 0;
}
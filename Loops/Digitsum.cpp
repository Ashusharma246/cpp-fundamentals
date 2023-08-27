#include<iostream>
using namespace std;

void sum_of_digits(int num){
    int sum=0;
    while(num!=0){
        sum=sum + num%10;
        num= num/10;
    }

    cout<<sum;
}

int main(){
    int num ;
    cout<<"enter the digits : ";
    cin>> num;
    sum_of_digits(num);

    return 0;
}
#include<iostream>
using namespace std;
void digit_sum(int num){
    int sum=0;
    while (num!=0){
        sum=sum+num%10;
        num=num/10;
    }
    cout<<sum<<endl;
}
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    digit_sum(num);

    return 0;
}
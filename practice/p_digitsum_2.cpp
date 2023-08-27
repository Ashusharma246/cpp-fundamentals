#include<iostream>
using namespace std;
void sum_of_digits(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    cout<<sum;
}

int main(){
    int num;
    cout<<"numbers: ";
    cin>>num;
    sum_of_digits(num);
    return 0;
}
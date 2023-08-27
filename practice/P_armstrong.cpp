#include<iostream>
using namespace std;
void armstrong(int num){
    int sum=0;
    int num_value=num;
    int x;
    while(num!=0){
        x=num%10;
        sum=sum+x*x*x;
        num=num/10;
    }
    if(sum==num_value){
         cout<<"Armstrong";
    }
    else{
        cout<<"Not armstrong";
    }
   
}
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    armstrong(num);
    return 0;
}
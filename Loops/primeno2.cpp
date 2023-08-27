#include<iostream>
using namespace std;
bool prime_number(int num){
    for(int i=2;i<=num;i++){
        if(num%2==0){
            cout<<"not a prime number";
            return false;
        }   
        else{
            cout<<"prime number";
            return true;
        }
    }
    return true;

}
int main(){
    int num1;
    
    cout<<"enter the number: ";
    cin>>num1;
    prime_number(num1);

    return 0;
}
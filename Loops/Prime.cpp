//check whether a number is prime or not
#include<iostream>
using namespace std;
bool prime_number(int number1){
    for(int i=2;i<=number1-1;i++){
        if(number1%i==0){
            cout<<"not a prime number"<<endl;
            return false;
        }
    }
    cout<<"prime number";
    return true;                                                                                         
}
int main(){
    int number1;
    int num2;
    cout<<"first number :";
    cin>>number1;
    prime_number(number1);
    return 0;

}
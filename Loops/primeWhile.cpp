#include<iostream>
using namespace std;
bool prime_number(int number){
    int i=2;
    while(i<=number-1){
        if(number%i==0){
            cout<<"number is not prime";
            return false;        
        }
        i++;
        }
        cout<<"number is prime";
      return true;
    }




int main(){
    int number;
    cout<<"number:" ;
    cin>>number;
    prime_number(number);
    return 0;
}
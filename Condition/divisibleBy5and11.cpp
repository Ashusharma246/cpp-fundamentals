//number is divisible by 5 and 11

#include<iostream>
using namespace std;
void divisible(int num){

    if(num%5==0 && num%11==0){
        cout<<"the number is divisible";
    }
    else{
        cout<<"the number is not divsible";
    
    }
}
int main(){
    int num;
    cout<<"enter the number : ";
    cin>>num;
    divisible(num);

    return 0;
}
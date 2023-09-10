#include<iostream>
using namespace std;

void evenodd(int number){
    if (number%2==0){
         cout<<"even";
    }
     else{
        cout<<"odd";
     }
}
int main(){
    int number;
    cin>>number;

    evenodd(number);

    return 0;
}
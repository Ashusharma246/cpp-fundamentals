#include<iostream>
using namespace std;

void len(int number) {
    int count=0; 
    while(number!=0){
        count+=1;
        number=number/10;

    }
    cout<<count;
}

int main(){
    int num;
    cout<<"enter the number : ";
    cin>>num;
    len(num);
    return 0;
}

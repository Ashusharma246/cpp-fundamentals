#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int new_number[num];
    int sum=0;
    
    for(int i=0;i<num;i++){
        cin>>new_number[i];
    }
    for(int i=0;i<num;i++){
        sum=sum+new_number[i];
    }
    cout<<sum;
    
    return 0;
}
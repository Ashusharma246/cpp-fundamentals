#include<iostream>
using namespace std;

string even_odd(int num){
    string ans;
    
    if(num%2==0){
        ans="even";
    } else {
        ans="odd";
    }
        
    return ans;
}

int main(){
    int num;
    cin>>num;
    int new_number[num];
    for(int i=0;i<num;i++){
        cin>>new_number[i];
    }
    
    for(int i=0;i<num;i++){
        cout<<new_number[i]<<" is "<<even_odd(new_number[i])<<endl;
    }
    
    return 0;
}
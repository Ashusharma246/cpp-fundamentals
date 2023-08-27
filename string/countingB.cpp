#include<iostream>
using namespace std;
void count_b(string no_of_B){
    int count=0;
    for(int i=0;i<=no_of_B.size();i++){
        
        if(no_of_B[i]=='b'){
            count+=1;
        }
        
    }
    cout<<count;
    }
int main(){
    string number_of_b;
    cout<<"string :";
    cin>>number_of_b;
    count_b(number_of_b);
    return 0;
}
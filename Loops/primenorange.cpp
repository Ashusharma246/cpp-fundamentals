//WAP to print range of the given prime number METHOD 0
#include<iostream>
using namespace std;
bool is_prime(int n){
    if (n<2){
        return false;
    }
    for(int i=2;i<=n;i++){
        if(n%2==0)
    {
    return false;
    }   
     }
    return true;
}
int main(){
    int lower=1;
    
    int upper=20;
    
    
    for(int i=2;i<=upper;i++){
        if(is_prime(i)){
            cout<<i<<" ";
        }
    }

    return 0;
}
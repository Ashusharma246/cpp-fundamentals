#include<iostream>
using namespace std;
int AP(int n){
    int a;
    a=(3*n+7);

    return a;
}

int main(){
    int n;
    cin>>n;
    AP(n);
    cout<<AP(n);
}
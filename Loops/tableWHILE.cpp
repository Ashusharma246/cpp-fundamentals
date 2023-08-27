#include<iostream>
using namespace std;

int main(){
    int i=1;
    int x,y;
    
    cin>>x>>y;

    while(i<=y){
        cout<<x <<" x "<<i<<" = "<<x*i<<endl;
    }

    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int  i=0;i<=n;i++){
        int cube=i*i*i;
        sum=sum+cube;
        }
    cout<<sum<<endl;
    return 0;
}
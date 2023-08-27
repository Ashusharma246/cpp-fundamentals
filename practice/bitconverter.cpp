#include<iostream>
#include<math.h>
using namespace std;
int bitcoverter(int n){
    int i=0;
    int ans=0;
    while(n!=0){
        int bit=n&1;
        ans=ans+bit*pow(10,i);
        n=n>>1;
        i++;
    }
    return ans;

}
int bitcounter(int n){
    int num=bitcoverter(n);
    int ans=0;
    while(num!=0){
        int digit=num%10;
        if(digit==1){
            ans=ans+digit;
        }
        num=num/10;

    }
    return ans;
    return num;
}
int main(){
    int n,m;
    cout<<"enter the value of A ans B";
    cin>>n>>m;
    int answer=bitcounter(n)+bitcounter(m);
    cout<<answer<<endl;
}
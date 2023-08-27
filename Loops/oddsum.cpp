//input : 5
//output : 1 + 3 + 5 + 7 + 9 = 25
#include<iostream>
using namespace std;
void odd_sum(int num){
    int sum=0;
    int j = 1; 
    for(int i=1;i<=num;i++){
        sum=sum +j;
        j+=2;
    }
    cout<<sum;
}
int main(){
    int num;
    cout<<"number :  ";
    cin>>num;
    odd_sum(num);
    return 0;
}
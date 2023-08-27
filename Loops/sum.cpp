//print the sum of first N natural numbers
//Sample Input : 10
//Sample Output : 55
#include<iostream>
using namespace std;
void sum_of_numbers(int N){
    int sum=0;
    for (int i=1;i<=N;i++){
        sum=sum+i;
    }
    cout<<sum;
}
int main(){
    int N ;
    cout<<"enter the number ";
    cin>>N;
    sum_of_numbers(N); 
    return 0;
}
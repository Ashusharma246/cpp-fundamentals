#include<iostream>
using namespace std;

void sum_cube(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        sum=sum+i*i*i;


    }
    cout<<sum<<endl;


}
int main(){
    int num;
    cout<<"enter the number";
    cin>>num;
    sum_cube(num);

    return 0;
}
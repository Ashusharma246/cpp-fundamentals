//input : 3
// output : 36
#include<iostream>
using namespace std;
void sum_of_cubes(int num){
    int sum = 0;
    for(int i=1;i<=num;i++){
        sum=sum+i*i*i;
        }
    cout<<sum<<endl;

}

int main(){
    int number;
    cout<<"enter the number : ";
    cin>>number;
    sum_of_cubes(number);
   
    

    return 0;
}
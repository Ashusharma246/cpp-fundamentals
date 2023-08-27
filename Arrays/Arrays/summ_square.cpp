#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int arr[num];
    int sum_square=0;
    
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num;i++){
        sum_square=sum_square+arr[i]*arr[i];
    }
    cout<<sum_square;
 return 0;   
}
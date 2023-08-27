#include<iostream>
using namespace std;
float percentage(int arr[]){
    float sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    return (sum/5);
}

int main(){
    int arr[5];
    for(int i=0;i<5;i++ ){
        cin>>arr[i];
    }
    cout<<percentage(arr);
    
}
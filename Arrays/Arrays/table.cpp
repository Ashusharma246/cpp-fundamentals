#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int arr[10];
    
    for(int i=1;i<=10;i++){
        arr[i-1]=num*i;
        cout<<arr[i-1]<<endl;
    }
}

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int min=999999;
    for(int i=0;i<n;i++){ 
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min;
    return 0;
}
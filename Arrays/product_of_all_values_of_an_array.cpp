#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int prod=1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   for(int i=0;i<n;i++){
       prod=prod*arr[i];
   }
   cout<<prod;
    return 0;
}
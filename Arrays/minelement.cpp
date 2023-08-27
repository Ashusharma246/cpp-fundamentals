3#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min = 999999999;
    for(int i=0;i<n;i++){
        if(min>arr[i]){//9999900>555
            min=arr[i];
        }

    }
    cout<<"min element"<<min<<endl;
}
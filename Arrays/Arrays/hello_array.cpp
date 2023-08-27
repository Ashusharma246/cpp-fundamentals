#include<iostream>
using namespace std;

int main(){
    int n;

    cin>>n;

    //creating an int array
    int arr[n];

    //taking user input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //printing arr value
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
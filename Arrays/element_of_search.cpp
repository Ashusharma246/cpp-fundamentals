#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int num, index;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"number to be searcherd ";
    cin>>num;
    for(int i=0;i<n;i++){
        {   
            if(arr[i]==num){
                index=i;
                break;
            }
        }
        
    }
    cout<<"\n element found at index "<<index;
    return 0;
}
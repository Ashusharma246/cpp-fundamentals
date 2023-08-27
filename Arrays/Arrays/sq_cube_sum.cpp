#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int arr[num];
    int sum_sq_cube=0;
    
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num;i++){
        if(i%2==0){
            sum_sq_cube=sum_sq_cube+arr[i]*arr[i];
            
        }
        else{
            sum_sq_cube=sum_sq_cube+arr[i]*arr[i]*arr[i];
        
    }
    
    }
    cout<<sum_sq_cube;
   return 0; 
}
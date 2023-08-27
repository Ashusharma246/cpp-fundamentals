#include<iostream>
using namespace std;

int main(){
    int row, col;
    
    cin>>row;
    cin>>col;
    
    int arr[row][col];
    
    INPUT
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
            
        }
    }
    
    //OUTPUT
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          
            cout<<arr[i][j]<<" ";
        }
         cout<<endl;
    }   
    
    return 0;
}
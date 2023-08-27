#include<iostream>
using namespace std;

int main(){
    int number_of_students;
    cin>>number_of_students;
    
    int arr[number_of_students][5];
    
    for(int i=0;i<number_of_students;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<number_of_students;i++){
        int sum=0;
        for(int j=0;j<5;j++){
            sum=sum+arr[i][j];
        }
        int value=sum/5;
        int percentage[value][5];
        for(int i=0;i<=number_of_students;i++){
            cout<<"percentage of student "<<number_of_students<<" is "<<percentage[value][5]<<endl;
        }
        
    }
        
        
    return 0;    
    }
    
    
 
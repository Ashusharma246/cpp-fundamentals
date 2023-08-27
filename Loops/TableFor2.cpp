#include<iostream>
using namespace std;

void multiplication(int i,int multiple, int multiple_2){
    cout<<"1st number : ";
    cin>>multiple;
    cout<<"2nd number : ";
    cin>>multiple_2;

    for(i=1;i<=multiple_2;i++){
        cout<<" x "<<i<<" = "<<" "<<multiple*i<<endl;
    }
    
    
    }


int main(){
    int multiple,multiple_2,i;
    multiplication(multiple,multiple_2,i);
    return 0;

}
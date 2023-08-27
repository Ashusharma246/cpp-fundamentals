#include<iostream>
using namespace std;
void the_cube(int num){
   
     for(int i=1;i<=num;i++){
        cout<<i<<">>>>>>>>"<<i*i*i<<endl;
     }
    
}
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    the_cube(num);
    return 0;
}
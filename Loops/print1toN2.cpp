#include<iostream>
using namespace std;
void natural_numbers(int i, int num)
{
    cout<<"enter the natural number : ";
    cin>>num;
    for(i=1;i<=num;i++){
        cout<<i<<endl;
    }
    


}

int main(){
    int i,num;
    natural_numbers(i,num);
    return 0;
}
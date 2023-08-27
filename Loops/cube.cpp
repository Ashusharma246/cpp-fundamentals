//smaple input : 5
//sample ouptut : 1 >>>>> 1
//                2 >>>>> 8
//                3 >>>>> 27
//                4>>>>>>>>64
#include<iostream>
using namespace std;

void multiple(int x){
    for(int i=1;i<=x;i++){
        cout<<i<<">>>>>>"<<i*i*i<<endl;
    }
}

int main(){
    int cube;
    cout<<"enter the number : ";
    cin>>cube;
    multiple(cube);
    return 0;
}
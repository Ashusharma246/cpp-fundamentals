#include<iostream>
using namespace std;

void multiple(int x, int y){
    if (y%x==0){
          cout<<y<<" is a multiple " <<x <<endl;
    }  
     else{
        cout<<y<<" is not a multiple "<<x<< endl;
    } 
}

bool multiple1(int x, int y){
    if (y%x==0){
        return true;
    }  
     else{
        return false;
    } 

    return false;
}

int main()
{
    int x,y;
    cin>>x>>y;
    multiple(x,y);

    bool res = multiple1(x,y);
    if(res == true){
        cout<<y<<" is a multiple "<<x;
    } else {
        cout<<y<<" is not a multiple "<<x;    
    }

    return 0;
}
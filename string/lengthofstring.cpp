#include<iostream>
using namespace std;

void len_of_string(string a){
    int count=0;
    for(int i=0;i<a.size();i++){
        count+=1;
    } 
    cout<<count;
}
int main(){         
    string a;
    cout<<"sting : ";
    cin>>a;
    len_of_string(a);
    return 0;
}
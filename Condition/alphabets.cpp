#include<iostream>
using namespace std;

void alphabet(char word){
    cout<<" Enter the word : ";
    cin>>word;
    if( word>='a' && word<='z'){
    cout<<"alphabet";
    }
    else if(word>='A'&& word<='Z'){
        cout<<"alphabet";
    } 
    else{
        cout<<"Error!";
    }
}
int main(){
    char word;
    alphabet(word);
    return 0;
}
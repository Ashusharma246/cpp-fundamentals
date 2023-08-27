#include<iostream>
using namespace std;
void pallindrome(string word){
    int size=word.size();
    for(int i=0;i<size;i++){
        if(word[i]!=word[size-1-i]){
            cout<<"not a pallindrome";
            return;
        }    
       }
    cout<<"pallindrome";
    }
int main(){
    string word;
    cout<<"word :";
    cin>>word;
    pallindrome(word);
    return 0;
}
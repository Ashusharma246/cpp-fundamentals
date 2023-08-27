#include<iostream>
using namespace std;
// input check vowel or consonents
void vowel( char word ){
    if(word == 'a' or word =='e' or word=='i' or word=='o' or word=='u' ){
        cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }
}


int main()
{
    char word;
    cout<<"enter ur word : ";
    cin>>word;
     
    vowel(word);


}

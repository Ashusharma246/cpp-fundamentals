//grading in school
// >90 A
// >80 <= 90 B
// >70 <= 80 C
// >60 <= 70 D
// tum gadhe ho
#include <iostream>

using namespace std;
int main(){
    int score;
    cin>>score;

    if(score>90){
        cout<<"A"<<endl;
    } else if(score>80 and score<=90){
        cout<<"B"<<endl;
    } else if(score>70 and score<=80){
        cout<<"C"<<endl;
    } else if(score>60 and score<=70){
         cout<<"D"<<endl;
    } else {
        cout<<"fail";
    }
    
    return 0;

}

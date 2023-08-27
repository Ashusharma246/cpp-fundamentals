#include<iostream>
using namespace std;
int substraction(int a, int b){
    int result=a-b;
    return result;
}

int main(){
    int a=5,b=3,c=2,d=1;
   int n,m;
   n = substraction(a,b);// function calling because of ()
   m = substraction(c,d);
   cout<<n<<endl; //print
   cout<<m;
   

    

return 0;

}
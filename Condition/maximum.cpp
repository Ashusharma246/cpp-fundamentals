//maximum between three number

#include<iostream>

using namespace std;

void maximum(int a, int b, int c)
{
    if(a>b && a>c)\
    {
        cout<<"a is Greater : "<<a;
    }
    else if(b>a && b>c)
    {
        cout<<"b is Greater : "<<b;
    }
    else
    {
        cout<<"c is Greater : "<<c;
    }
}
int main(){
    int a,b,c;

    cout<<"first number : ";
    cin>>a;
    
    cout<<"second number : ";
    cin>>b;
    
    cout<<"Third number : ";
    cin>>c;
    
    maximum(a,b,c);

    return 0;

}

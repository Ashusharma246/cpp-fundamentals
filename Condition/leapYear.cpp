#include<iostream>
using namespace std;
void Leap_year(int year){
    if(year%4==0 && year%100!=0) {
        cout<<"Leap Year";
    }
    else if  (year%400==0)  {
        cout<<"Leap year";
    }
    else{
        cout<<"Not a Leap year";
    }
}
int main(){
    int year;
    cout<<"Enter the year : ";
    cin>>year;
    Leap_year(year);

    return 0;

}
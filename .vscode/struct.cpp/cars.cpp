#include<iostream>
#include<string>
using namespace std;
    struct car{
        string brand;
        string model;
        int year;
    };

int main(){

    //put data into the second structure
    car mycar1;
    mycar1.brand="BMW";
    mycar1.model="x7";
    mycar1.year=1999;
    
    car mycar2;
    mycar2.brand="Audi";
    mycar2.model="Q7";
    mycar2.year=2015;


    cout<<mycar1.brand<<" "<<mycar1.model<<" "<<mycar1.year<<"\n";
    cout<<mycar2.brand<<" "<<mycar2.model<<" "<<mycar2.year<<"\n";


}
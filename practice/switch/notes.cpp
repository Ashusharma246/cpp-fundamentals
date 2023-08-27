#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"enter the amount: "<<endl;
    cin>>amount;
    
    int hundreds;
    int fifty;
    int twenty;
    int tens, ones;
    switch(1){
        case 1:
        
            hundreds=amount/100;
            
            cout<<"number of hundreds rupees notes: "<<hundreds<<endl;
            amount=amount-hundreds*100;
            //13 will be print
        case 2:
            fifty=amount/50;
            cout<<"number of fifties rupee notes: "<<fifty<<endl;
            amount=amount-fifty*50;
            
        case 3:
            twenty=amount/20;
            cout<<"number of twenty rupee notes: "<<twenty<<endl;
            amount=amount-twenty*20;
            
        case 4:
            tens=amount/10;
            cout<<"number of ten rupees notes: "<<tens<<endl;
            amount=amount-tens*10;
        case 5:
            ones=amount/1;
            cout<<"number of 1 rupee notes: "<<ones<<endl;
            amount=amount-ones*1;
    }
    return 0;
}
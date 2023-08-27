#include<iostream>
using namespace std;
void print_array(int arr[],int  n){
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
}
void swap_alternate(int arr[],int size){
    for(int i=0;i<=size;i++){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8]={5,2,9,4,6,7,4,5};
    int odd[5]={2,6,8,4,3};

    swap_alternate(even,8);
    print_array(even,8);

    cout<<endl;
    swap_alternate(odd,5);
    print_array(odd,5);
}
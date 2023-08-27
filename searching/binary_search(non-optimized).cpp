#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int key){
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;    
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;

    }
    return -1;
}
int main(){
    int even[6]={2,4,6,8,12,16};
    int odd[5]={3,6,9,12,15};

    int evenIndex=binarySearch(even,6,16);
    cout<<"index of key is (even)"<<evenIndex<<endl;

    int oddIndex=binarySearch(odd,5,12);
    cout<<"index of key is (odd)"<<oddIndex<<endl;
    
    }
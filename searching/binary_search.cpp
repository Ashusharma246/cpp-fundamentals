#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key)
{
    int start = 0;
    int end=size-1;
    int mid=start+(start+end)/2;

    while(start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        {
        if(key>arr[mid]){
            start=mid+1;
            }
            
        }
        if(key>arr[mid]){
            start=mid+1;

        }
        else{
            end=mid-1;
            
            }
    mid=start+(end-start)/2;
           
        }      
     return -1;
}   
int main(){


    int even[6]={2,4,6,8,12,16};
    int odd[5]={3,6,9,12,15};

    int evenIndex=BinarySearch(even,6,12);
    cout<<"index of given key is: "<<evenIndex<<endl;

    int oddIndex=BinarySearch(odd,5,9);
    cout<<"index of given key is: "<<oddIndex<<endl;
}
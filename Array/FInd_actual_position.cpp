#include<iostream>
using namespace std;
int find_actual_pos(int arr[],int size,int target){

    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
   
    while(end>=start){
        if(arr[mid]==target){
        return mid;
        }
        else if(arr[mid]<target&&arr[mid+1]>target){
            return mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
int arr[]={1,4,6,8,10,14,16,18};
int size=sizeof(arr)/sizeof(arr[0]);
int target=4;
cout<<"Actual position of array"<<find_actual_pos(arr,size,target);
}
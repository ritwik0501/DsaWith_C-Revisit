#include<iostream>
using namespace std;
int peak_arry(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid;
    while(end>=start){
        mid=start+(end-start)/2;
        if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid]){
            return mid;
           
        }
        else if(arr[mid-1]<arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;

}
int main(){
    int arr[]={2,4,6,8,10,8,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<arr[peak_arry(arr,size)];
}
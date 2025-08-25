#include<iostream>
using namespace std;
int first_occurrence=-1;
int last_occurrence=-1;
void firstAndLastOccurrence(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    //first occurrence
    while(end>=start){
        if(arr[mid]==target){
            first_occurrence=mid;
            end=mid-1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
     start=0;
     end=size-1;
     mid=(start+end)/2;
//last occurrence
while(end>=start){
    if(arr[mid]==target){
        last_occurrence=mid;
        start=mid+1;
    }
    else if(arr[mid]<target){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=(start+end)/2;
}
}
int main(){
    int arr[]={5,7,7,8,8,8,8,8,8,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=8;
   firstAndLastOccurrence(arr,size,target);
    cout<<"First and last occurrence "<<"["<<first_occurrence<<","<<last_occurrence<<"]";
}
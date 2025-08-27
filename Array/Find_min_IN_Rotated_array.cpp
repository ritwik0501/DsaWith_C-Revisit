#include<iostream>
using namespace std;
int rotate_array(int arr[],int size){
    int start=0;
    int end=size-1;
    int ans=arr[0];
    while(end>=size){
        int mid=start+(end-start)/2;
        if(arr[0]>arr[mid]){
            ans=mid;
          end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}
int search_rotate_array(int arr [],int size,int target)
{
    int start=0;
    int end=size-1;
    int ans=0;
    while(end>=start){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            break;
        }
        else if(arr[0]>arr[mid]){
            if(arr[mid]>target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        else{
            if(arr[mid]>target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return ans;
}
int main(){
    int arr[]={4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<search_rotate_array(arr,size,7);
}
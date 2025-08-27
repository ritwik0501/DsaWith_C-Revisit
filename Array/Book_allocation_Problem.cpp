#include<iostream>
using namespace std;
int book_allocation(int arr[],int size,int student){
    if(student>size){
        return -1;
    }
    int start=0,end=0,mid,ans;
    for(int i=0;i<size;i++){
        start=max(start,arr[i]);
        end+=arr[i];
    }
    while(end>=start){
        mid=start+(end-start)/2;
        int pages=0,student_count=1;
        for(int i=0;i<size;i++){
            pages+=arr[i];
            if(pages>mid){
                student_count++;
                pages=arr[i];
            }
        }
        //check if student get books properly or not
        if(student_count<=student){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={10,20,30,40};
    int size=sizeof(arr)/sizeof(arr[0]);
    int student=2;
   cout<< book_allocation(arr,size,student);
    return 0;
}
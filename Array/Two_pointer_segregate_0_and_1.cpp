#include<iostream>
using namespace std;
void two_pointer(int arr[],int size){
int start=0;
int end=size-1;
while(end>start){
    if(arr[start]==0){
        start++;
    }
    //arr[start] is 1 here
    else{
        if(arr[end]==0){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else{
            end--;
        }
    }
}
}
int main(){
    int arr[]={1,0,1,0,1,0,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    two_pointer(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
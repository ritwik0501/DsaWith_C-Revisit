#include<iostream>
using namespace std;
void bubble_sort(int arr[],int size){

    for(int i=size-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[]={13,46,24,52,28,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
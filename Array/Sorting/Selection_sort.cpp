#include<iostream>
using namespace std;
void selection_sort(int arr[],int size){
    for(int i=0;i<=size-2;i++){
        int min=i;
        for(int j=i;j<=size-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

 int main(){
    int arr[]={3,4,1,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
 }
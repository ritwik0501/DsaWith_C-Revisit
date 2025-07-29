#include<iostream>
using namespace std;


void insertion_sort(int arr[],int size){
    for(int i=0;i<size;i++){
       int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
            }

    }
}
void bubble_Sort(int arr[],int size){
    // for(int i=0;i<size;i++){
    //     for(int j=0;j<size-1-i;j++){
    //         if(arr[j]>arr[j+1]){
    //             int temp=arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=temp;
    //         }
    //     }
    // }
for(int j=0;j<=size;j++){
    int issort=0;
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            issort=1;
        }
    }
    if(issort==0){
        break;
    }
}
}
void Selection_sort(int arr[],int size){
   for(int i=0;i<size;i++){
     int mini=i;
    for(int j=i;j<size;j++){
        if(arr[j]<arr[mini]){
           
            mini=j;
        }
    }
    int temp=arr[i];
            arr[i]=arr[mini];
            arr[mini]=temp;
    }
   }

   int main(){

    int arr[]={13,9,1,5,4,3,2};
    // int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    // Selection_sort(arr,size);
    bubble_Sort(arr,size);
    // insertion_sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
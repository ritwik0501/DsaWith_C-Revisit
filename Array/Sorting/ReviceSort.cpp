#include<iostream>
using namespace std;

void selection_sort(int arr[],int size){
  for(int i=0;i<size;i++){
    int min = i;
    for(int j=i;j<size;j++){
        if(arr[j]<arr[min]){
            min =j;
        }
    }
    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
  }
}

void bubble_sort(int arr[],int size){
 
    for(int i=0;i<size;i++){
        int isSort=0;
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            isSort=1;
            }
        }
        if(isSort==0){
            break;
        }
    }
}


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

int main(){
    int arr[]={13,9,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    // selection_sort(arr,size);
    // bubble_sort(arr,size);
    insertion_sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
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

 int main(){
int arr[]={0,5,7,1,3,2,4,0};
int size=sizeof(arr)/sizeof(arr[0]);
insertion_sort(arr,size);
for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}
 }
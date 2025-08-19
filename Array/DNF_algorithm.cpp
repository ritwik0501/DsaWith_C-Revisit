//input[1,0,0,1,1,1,0,1,0,0,1]
//output:-[0,0,0,0,0,1,1,1,1,1,1]
//condition :- you have to read value and change it in one go

#include<iostream>
using namespace std;

void dnf_algo(int arr[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        if(arr[i]==1){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
        }
        if(arr[i]==0){
            i++;
        
        }
    }

}
int main(){
    int arr[]={1,0,0,1,1,1,0,1,0,0,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    dnf_algo(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
#include<iostream>
#include<vector>
using namespace std;

void LeaderBoard(int arr[],int size){
    vector< int > arr1;
    for(int i=0;i<size;i++){
       for(int j=i;j<size;j++){

        if(arr[i]>arr[j] && arr[i]>arr[i+1]){
            arr1.push_back(arr[i]);
             arr1.push_back(arr[j]);
        }

       }
       }

       for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<endl;
       }
        
    }


int main(){
    int arr[]={1,3,4,5,2,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    LeaderBoard(arr,size);
}
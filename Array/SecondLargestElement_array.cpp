#include<iostream>
using namespace std;
//using bubble sort :-
int  secondLargestElementinArray(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if(arr[0]==arr[size-1]){
        return -1;
    }
    else{
  for(int k=0;k<size;k++){
    if(arr[k]==arr[k+1]){
        continue;
    }
    return arr[k+1];
  }
}
    return 0 ;
}


int secondLargestElementinArray2(int arr[],int size){
//    Revice task
    //follow another method :-
    /*
-->[Better Approach] Two Pass Search
-->[Expected Approach] One Pass Search
    */
    return 0;
}

int main(){
    int arr[]={1,78,98,45,67,22,999};
    // int arr[]={10,10,10,10,10,10,10};
    int size =7;
    int result=secondLargestElementinArray(arr,size);
    cout<<"second Largest element is "<<result;
    
}
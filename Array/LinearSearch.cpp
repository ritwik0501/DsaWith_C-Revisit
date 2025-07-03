#include<iostream>
using namespace std;
int linearSearch(int arr[],int key,int sizeOfArray){
for(int i=0;i<sizeOfArray;i++){
    if(arr[i]==key){
        return i+1;
    }
}
    return -1;
}
int main(){
    int arr1[]={1,2,3,6,7,8};
    int position=linearSearch(arr1,3,6);
    if(position==-1)
        cout<<"Sorry your key is not present here";
    else
        cout<<"Your key is "<<position;
}
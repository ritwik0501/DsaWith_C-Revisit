#include<iostream>
using namespace std;
int tapping_rain_water(int arr[],int size){
    int left_index[size];
    int right_index[size];
    int ans[size];
    left_index[0]=0;
    right_index[size-1]=0;
    for(int i=1;i<size;i++){
        left_index[i]=max(left_index[i-1],arr[i-1]);
    }
    for(int i=size-2;i>=0;i--){
        right_index[i]=max(right_index[i+1],arr[i+1]);
    }

    
    for(int i=0;i<size;i++){
        int temp=min(left_index[i],right_index[i]);
        if(temp>arr[i]){
            ans[i]=temp-arr[i];
        }
        else{
            ans[i]=0;
        }
    }
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=ans[i];
    }
    return sum;
}

int main(){
    int arr[]={4,2,0,5,2,6,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=tapping_rain_water(arr,size);
    cout<<sum<<" unit of  rain water it can hold";
}
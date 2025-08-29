#include<iostream>
#include<vector>
using namespace std;
//this only works in sorted array
    
vector<int> TwoSum(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int sum;
    vector<int>ans;
    while(end>=start){
        sum=arr[start]+arr[end];
        if(sum==target){
            ans.push_back(arr[start]);
            ans.push_back(arr[end]);
            break;
        }
        else if(sum>target){
            end--;
        }
        else{
            start++;
        }
    }
    return ans;
}
int main(){
    int arr[]={2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int>anssum=TwoSum(arr,size,6);
    for(int i=0;i<anssum.size();i++){
        cout<<anssum[i]<<",";
    }

}
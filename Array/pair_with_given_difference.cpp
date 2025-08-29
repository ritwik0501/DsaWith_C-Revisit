#include<iostream>
#include<vector>
using namespace std;
vector<int> pairWithGivenDifferences(int arr[],int size,int target){
    int start=0,end=1;
    vector<int>ans;
    while(end<size){
        int difference=arr[end]-arr[start];
        if(difference==target){
            ans.push_back(arr[end]);
            ans.push_back(arr[start]);
            break;
        }
        else if(difference<target){
            end++;
        }else{
            start++;
        }
    }
    return ans;
}
int main(){
    int arr[]={2,3,5,10,50,80};
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans1=pairWithGivenDifferences(arr,size,45);
    for(int i=0;i<ans1.size();i++){
        cout<<ans1[i]<<",";
    }
}
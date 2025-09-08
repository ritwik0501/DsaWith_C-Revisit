#include<iostream>
#include<vector>    
using namespace std;
vector<int> prefixsum(int arr[],int size){
vector<int>ans(size);
ans[0]=arr[0];
for(int i=1;i<size;i++){
    ans[i]=ans[i-1]+arr[i];
}
return ans;
}
int main(){
int arr[]={2,3,4,5,6,7};
int ans1;
int size=sizeof(arr)/sizeof(arr[0]);
vector<int>ans=prefixsum(arr,size);
cout<<"Enter the index number for which you want to see value";
cin>>ans1;
cout<<ans[ans1];

}
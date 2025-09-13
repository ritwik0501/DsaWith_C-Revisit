#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={3,6,4,2,7,8,11,5,9,3,2,1,17,8,5,9};
    for(int i=0;i<4;i++){
        if(i%2==0){
            for(int j=0;j<4;j++){
                cout<<arr[j][i];
            }
        }else{
            for(int j=3;j>=0;j--){
                cout<<arr[j][i];
            }
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;

int main(){
    int arr[3][4]={2,3,4,5,1,2,6,8,4,9,3,2};
    for(int i=0;i<3;i++){
        for(int j=3;j>=0;j--){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
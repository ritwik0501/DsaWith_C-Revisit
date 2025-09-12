#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={5,8,3,9,6,2,8,4,5,3,2,2,2,8,1,9};
    int first;
    //first diagonal sum of array
    //this is not effective code
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         if(i==j){
    //             first+=arr[i][j];
    //         }
    //     }
    // }
    //effective code
    for(int i=0;i<4;i++){
        first+=arr[i][i];
    }
    //second diagonal sum of array
    int second=0;
    int i=0,j=3;
    while(j>=0){
        second+=arr[i][j];
        i++;
        j--;
    }
    cout<<first<<endl;
    cout<<second;

    
}
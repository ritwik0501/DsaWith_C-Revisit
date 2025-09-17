#include<iostream>
using namespace std;



int main(){
    int row=4;
    int col=5;
    // int arr1[row][col]={2,6,10,14,18,20,24,27,29,38,47,52,78,93,102,108,111,200,218,320} if you use these your code will be fine but it will give u compile time error;
    int arr1[row][col] = {
    {2, 6, 10, 14, 18},
    {20, 24, 27, 29, 38},   
    {47, 52, 78, 93, 102},
    {108, 111, 200, 218, 320}
};
    int size=sizeof(arr1)/sizeof(arr1[0][0]);
    int start=0;
    int end=size-1;
    int target=52;
    while(end>=start){
        int mid=(end+start)/2;
        int row_index=mid/col;
        int col_index=mid%col;
        if(arr1[row_index][col_index]==target){
            cout<<"got it ,["<<row_index<<col_index<<"]";
            return 0;
        }
        else if(arr1[row_index][col_index]>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<"Not found";

}
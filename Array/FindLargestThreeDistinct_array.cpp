#include<iostream>
using namespace std;
void FindLargestThree(int arr[],int size){
   int arr1=arr[0];

    int largestNumber1=INT_MIN;
    int largestNumber2=INT_MIN;
    int largestNumber3=INT_MIN;

    if(arr1==arr[1]){
   for(int i=0;i<size;i++){
    if(arr1==arr[i]){
        continue;
    }
   }
   cout<<"All numbers are same "<<arr[0];

}else{
    for(int i=0;i<size;i++){
        if(arr[i]>largestNumber1){
            largestNumber3=largestNumber2;
            largestNumber2=largestNumber1;
            largestNumber1=arr[i];
        }else if(arr[i]>largestNumber3 && arr[i]<largestNumber2 && arr[i]<largestNumber1){
            
            largestNumber3=arr[i];
        }else{
            
            largestNumber2=arr[i];
        }
    }
    cout<<"1st largest numbers are "<<largestNumber1 <<"\n2nd largest numbers are"<<largestNumber2<<"\n3rd largest numbers are"<<largestNumber3; 
}
} 

//when you revice ,do another approach like return in array.
int main(){
    int arr[]={1,78,98,45,67,22,999};
    // int arr[]={10,10,10,10,10,10,10};
    int size =7;
 

   FindLargestThree(arr,size); 
}
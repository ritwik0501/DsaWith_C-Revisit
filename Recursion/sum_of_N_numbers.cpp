#include<iostream>
using namespace std;

int sumOfnNumbers(int n){
    if(n==0){
        return 0 ;
    }
    return n+sumOfnNumbers(n-1);
}

int main(){
cout<<"Total sum of N numbers"<<sumOfnNumbers(1);
}
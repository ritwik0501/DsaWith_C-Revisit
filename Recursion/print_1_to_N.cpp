#include<iostream>
using namespace std;

void numRecursion(int n){
   int  number=n;
if(number==1){
cout<<number<<endl;
return;
}
cout<<n<<endl;
numRecursion(number-1);// if u do this ans :- 4,3,2,1
/*
of if u do this 
cout<<n<<endl;
numRecursion(number-1); 
ans:- 1,2,3,4
*/

}


int main(){
numRecursion(4);
}
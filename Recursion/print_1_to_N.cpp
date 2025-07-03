#include<iostream>
using namespace std;

void numRecursion(int n){
   int  number=n;
if(number==1){
cout<<number<<endl;
return;
}
cout<<n<<endl;
numRecursion(number-1);

}


int main(){
numRecursion(4);
}
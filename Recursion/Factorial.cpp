#include<iostream>
using namespace std;
int factorial(int num){
    int ans=1;
if(num<1){
    return 1;
}else

return num * factorial(num-1);
}
int main(){
cout<<"Factorial of 5 is "<<factorial(5);
}
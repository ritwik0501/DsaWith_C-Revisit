#include<iostream>
using namespace std;


int  facto(int num){
if(num==1){
    return num ;
}
return num*facto(num-1);

}
int main(){
    int num=5;
   cout<< facto(5);
}
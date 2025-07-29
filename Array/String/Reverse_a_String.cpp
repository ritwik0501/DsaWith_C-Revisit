#include<iostream>
using namespace std;

int main(){
    string s1="Ritwi";
   int start=0,end=s1.size()-1;
   while(start<=end){
    char c=s1[start];
    s1[start]=s1[end];
    s1[end]=c;
    start++;
    end--;
   }
   cout<<s1;
}
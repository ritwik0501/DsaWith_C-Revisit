#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string num1="23456";
    string num2=  "789";
    int index1=num1.size()-1;
    int index2=num2.size()-1;
    int sum=0,carry=0;
    string ans;
    //we take num1>num2
    while(index2>=0){
        sum=num1[index1]-'0'+num2[index2]-'0'+carry;
        carry =sum/10;
       char c=(sum%10+'0'); 
        ans+=c;
        index1--;
        index2--;
    }
    while(index1>=0){
        sum=num1[index1]-'0'+carry;
        carry=sum/10;
        char c=(sum%10+'0'); 
        ans+=c;
        index1--;
    }
    if(carry){
        ans+='1';
     }
     reverse(ans.begin(),ans.end());
    cout<<ans;

}
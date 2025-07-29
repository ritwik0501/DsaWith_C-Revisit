#include<iostream>
using namespace std;

int main(){
    string s1="Ritwik";
    string s1_reverse="";
   for(int i=s1.size()-1;i>=0;i--){
    s1_reverse.push_back(s1[i]);
   }
//    cout<<s1_reverse.size();
    if(s1==s1_reverse){
        cout<<"String is Palindrom";
    }else{
        cout<<"String is not palindrom.";
    }
}
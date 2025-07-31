#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s="aaaabbbacccc";
    vector<int>upper(26,0);
    vector<int>lower(26,0);
    int count=0;
    bool odd=0;
    for(int i=0;i<s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z' ){
            upper[s[i] -'A']++;
        }
        else{
            lower[s[i] -'a']++;
        }
    }
    for(int i=0;i<26;i++){
        if(upper[i]%2==0){
            count+=upper[i];
        }else{
            count+=upper[i]-1;
            odd=1;
        }

        if(lower[i]%2==0){
            count+=lower[i];
        }
        else{
            count+=lower[i]-1;
            odd=1;
        }
    }
    cout<<"Longest Palindrom of string "<<s<<"is :"<<count+odd;
}
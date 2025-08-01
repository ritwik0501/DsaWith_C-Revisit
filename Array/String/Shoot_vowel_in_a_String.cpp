#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s="LeetcOdE";
    vector<int>upper(26,0);
    vector<int>lower(26,0);
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            lower[s[i]-'a']++;
            s[i]='#';//here L##tc#d#
        }
        else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            upper[s[i]-'A']++;
            s[i]='#';
        }
    }
    for(int i=0;i<26;i++){
        int index=0;
        while(index<upper[i]){
            //for upper 
            ans+=char(i+65);
            index++;
        }
    }
    for(int i=0;i<26;i++){
        int index=0;
        while(index<lower[i]){
            //for lower
            ans+=char(i+97);
            index++;
        }
    }
    int index=0;
    for(int i=0;i<s.size();i++){
        
        if(s[i]=='#'){
            s[i]=ans[index];
            index++;
        }
    }
    cout<<"After Shooting a String "<<s;
}
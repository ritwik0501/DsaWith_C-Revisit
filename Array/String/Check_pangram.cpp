//check all the lowercase alphabet char are present in the sentence or not
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s1="the quick brown fox jumps over  the lazy dog";
    int flag=0;
    vector<int>ans(26,0);
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='\0'||s1[i]==' '){
            continue;
        }
        if(s1[i]>='a' && s1[i]<='z'){
            int pos= int(s1[i]-'a');
            ans[pos]=1;
        }else{
            cout<<"The sentence is not an Pangram";
            exit(0);
        }
    }


    for(int i=0;i<26;i++){
        if(ans[i]==0){
            flag=1;
        }
    }
    if(flag){
        cout<<"The sentence is not fully pangram";
    }else{
        cout<<"The sentence is pangram";
    }
}
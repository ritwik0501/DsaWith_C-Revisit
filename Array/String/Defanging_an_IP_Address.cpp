#include<iostream>
using namespace std;
int main(){

    string s="255.555.5555.6.7.8";
    string res="";
    int index=0;
    while(index<s.size()){
        if(s[index]=='.'){
            res+="[.]";
    }else{
        res+=s[index];
    }
    index++;
}
cout<<res;
return 0;
}
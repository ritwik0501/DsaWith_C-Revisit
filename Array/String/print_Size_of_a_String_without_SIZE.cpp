#include<iostream>
using namespace std;

int main(){
    string s1="Ritwik";
    int count=0;
    while(s1[count]!='\0'){
        count++;
    }
    cout<<"size of "<<s1<<"is "<<count;
}
#include <iostream>
#include <vector>
using namespace std;
// here we assume that the string given here only in lowercase;
int main()
{
    string s = "eabcabd";
    vector<int> ans(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        ans[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        int index = 0;
        while (index < ans[i])
        {
            cout << char(i + 97);
            index++;
        }
    }
}
#include<iostream>
#include<vector>
using namespace std;

    string longestPalindrome(string s) {
        string newStr="#";
        int i=0;
        while (i<(s.length()))
        {
            newStr=newStr+s[i];
            newStr=newStr+"#";
            i++;
        }
        cout<<newStr;
        return newStr;   
    }

int main()
{
longestPalindrome("hi");
}
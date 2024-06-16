#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Palindrome String

/* Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

*/

void processString(string& s){

        for ( int i = 0 ; i < s.size(); i++){
            if(!isalnum(s[i])) {
                s.erase(i,1);
            }
            s[i] = tolower(s[i]);
        }
}
bool checkPalindrome(string &s,int i){

    if (i>= s.size()/2) return true;

    if((s[i]) != (s[s.size() - i - 1])) return false;

    return checkPalindrome(s,i+1);
    
}

int main()
{
#ifndef ONLINE_JUDGE
        freopen("../input1.txt", "r", stdin);
        freopen("../output1.txt", "w", stdout);
#endif
    string s;
    
    s = "Ma layalam";

    processString(s);
    bool ans = checkPalindrome(s,0);
    if(ans) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    return 0;
}
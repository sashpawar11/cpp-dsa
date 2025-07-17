#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {

        //brute force
        if(s.length() != t.length()) return false;

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        return s==t;


        //alternate method
        // store frequencies of each char from s in a count arr
        // iterate through t and decrease the freq for occurences in count arr
        // iterate through final count arr, if all have values as 0 then it is an anagram
	
}
int main() {
    string s;
     string t;

    cin>> s;
    cin >> t;
    cout << isAnagram(s,t);
    return 0;
 
}
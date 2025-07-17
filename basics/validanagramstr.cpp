#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {

     
        if(s.length() != t.length()) return false;

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        return s==t;
	
}
int main() {
    string s;
     string t;

    cin>> s;
    cin >> t;
    cout << isAnagram(s,t);
    return 0;
 
}
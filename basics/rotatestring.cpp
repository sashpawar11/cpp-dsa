#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// unotimized - time complexity ()
bool rotateString(string s, string goal) {
        
            int i = 0;

            while(i < s.length()){
                char first = s[0];
                s = s.substr(1,s.length()) + first;
                if(s==goal){
                    return true;
                }
                i++;
            }
            return false;
}


int main() {
 
    string s;
    string t;

    cin>> s;
    cin >> t;
    cout << rotateString(s,t);
    return 0;
}
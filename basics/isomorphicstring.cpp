#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// unotimized - time complexity ()
bool isIsomorphic(string s, string t) {
        unordered_map <int,char> mpp;
        unordered_set<char> vals;


        for(int i = 0; i <s.length(); i++){
            auto itr = mpp.find(s[i]);

            // if found
            if(itr != mpp.end()){
                if((*itr).second != t[i]){
                    return false;
                }
                continue;
            }
            else{
                auto it = vals.find(t[i]);
                if(it != vals.end()){
                    return false;
                }
                mpp.insert({s[i], t[i]});
                vals.insert(t[i]);
            }
        }
        return true;  
 }


int main() {
 
    string s;
    string t;

    cin>> s;
    cin >> t;
    cout << isIsomorphic(s,t);
    return 0;
}
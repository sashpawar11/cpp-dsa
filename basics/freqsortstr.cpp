#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<char> frequencySort(string& s){
			// wrong soln
            vector<char> ordered;
            set<char> temp;

            for(int i = 0; i<s.length() ; i++){
                temp.insert(s[i]);
            }

            for(auto it: temp){
                ordered.push_back(it);
            }
            return ordered;

}

int main() {
    string s;
    cin >> s;

    vector<char> result = frequencySort(s);
    for(auto it: result){
        cout << it << " ";
    }

    
    return 0;
}
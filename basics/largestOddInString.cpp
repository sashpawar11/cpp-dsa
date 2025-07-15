#include<iostream>
#include<bits/stdc++.h>
using namespace std;
	
string largeOddNum(string& s){
        //your code goes here

        int idx = -1;
        int nonZeroIdx = 0;
   

             //search for first non-leading zero idx
        for(int i = 0 ; i< s.length(); i++){
            if (s[i] != '0'){
                nonZeroIdx = i;
                break;
            }
        }

        
        // find odd digit from the end of string ( as that will make the greatest odd num)
        for(int j = s.length()-1; j >= nonZeroIdx; j--)
        { 
                if( (s[j] - '0')% 2 != 0){
                   idx = j;
                   break;
                }    
        }

        if(idx == -1) return ""; // largest odd num not found
        return s.substr(nonZeroIdx, idx - nonZeroIdx + 1);
}

int main() {
 
    string str;
    cin >> str;
    cout << largeOddNum(str);
    return 0;
}
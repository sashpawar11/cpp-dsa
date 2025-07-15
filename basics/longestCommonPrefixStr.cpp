#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& str){
    //your code goes here

    string longestprfix = "";
    //First we sort the array/vec in lexical oder( lowest to highest)
    
    sort(str.begin(), str.end());
    
    

    string str1 = *str.begin(); // get first and last string in vector
    string str2 = *(str.end() - 1);

    int n = min(str1.length(), str2.length());


    for(int i = 1; i<= n-1; i++){
        if(str1.substr(0,i+1) == str2.substr(0,i+1)){
            longestprfix = str1.substr(0,i+1);
        }
    }
    
    return  longestprfix;
}


int main() {
 
    int num;
    cin >> num;
    vector<string> x;
    for(int i =0; i< num; i++){
        string inp;
        cin >> inp;
        x.push_back(inp);
    }

    cout << endl << "Longest common prefix is: " << longestCommonPrefix(x);
    return 0;
}
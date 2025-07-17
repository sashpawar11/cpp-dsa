#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& str){
            //your code goes here

            string longestprefix = "";
            //First we sort the array/vec in lexical oder( lowest to highest)
            
            sort(str.begin(), str.end());
            
            string str1 = *str.begin(); // get first and last string in vector
            string str2 = *(str.end() - 1);

            int n = min(str1.length(), str2.length());
            int prefixlength = 0;
            for(int i = 0; i< n; i++){

                    if(str1[i] == str2[i]){
                        prefixlength += 1;
                    }
                    else {
                        break;
                    }
            }
            
            longestprefix = str1.substr(0, prefixlength);
          
            return  longestprefix;
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
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
Finding occurencies of characters using hashing:

Eg:
imagine array has only lowercase chars
so -> 26 lowerchars
s = "abcdabefc"
-> for indexing logic for hashed arrays use ascii values of the characters
'a' -> 97
'z' -> 122

formula to index is:
char ascii to find - 'a' ascii value
to find ascii:
int x = 'a' , would do type conversion and find ascii value of 'a'

for no restriction of assuming lowercase input letters, use 256 as characters are at max 256 letters, as hashed ar size, 
and then the formula does not need to be c - 'a' , only hashed_arr[c]
*/
int main()
{
#ifndef ONLINE_JUDGE
        freopen("../input1.txt", "r", stdin);
        freopen("../output1.txt", "w", stdout);
#endif

    string s;
    cin >> s;

    int hashed_arr[26] = {0}; // assumign input is only lower chars (hence hashed array size 26 ( 26indexs))

    // precompute hashed array
    for (int i = 0 ; i < s.size(); i++){
        hashed_arr[s[i] - 'a'] += 1;
    }

    //fetch
    int x;
    cin >> x;
    while ( x--){
        char c;
        cin >> c;
        cout << "Frequency of " << c << " is : " << hashed_arr[c - 'a'] << endl;
    }

    return 0;
}
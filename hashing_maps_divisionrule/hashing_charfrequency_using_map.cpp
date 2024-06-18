#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/// @brief 
/// @return 
int main()
{
#ifndef ONLINE_JUDGE
        freopen("../input1.txt", "r", stdin);
        freopen("../output1.txt", "w", stdout);
#endif

    string s;
    cin >> s;

    //precompute using maps

    map <char,int> mpp;

   for(int i = 0; i<s.length(); i++){
        mpp[s[i]]++;

   }

    int q;
    cin >> q;
    while ( q--){
        char c;
        cout << mpp[c] << endl;
    }

    return 0;
}

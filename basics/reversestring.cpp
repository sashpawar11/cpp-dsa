#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string reverseString(string str){
    int n = str.length();
    int p1 = 0;
    int p2 = n - 1;
  
    while( p1 <= n/2 && p2 >= n/2 ){
        char temp = str[p1];
        str[p1] = str[p2];
        str[p2] = temp;
        p1++;
        p2--;
    }
    return str;
}

int main() {
    string str1 = "";
    cin >> str1;

    cout << reverseString(str1);
 
    return 0;
}
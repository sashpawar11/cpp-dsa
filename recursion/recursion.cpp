#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void recursive_f(int i, int n){
    
    if(i>n) return;

    cout << "Recursive call ("<< i << ")" << endl;
    recursive_f(i+1,n);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../input1.txt", "r", stdin);
    freopen("../output1.txt", "w", stdout);
#endif

    // recursion with base condition
    recursive_f(1,7);
    
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Print 1 to n using backtracking recursion
// cannot use f(i+1, N)

void backwardrecurion(int i , int n){

    if(i < 1) return;
    backwardrecurion(i-1, n);
    cout << i << endl;
    
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input1.txt", "r", stdin);
    freopen("../output1.txt", "w", stdout);
#endif

/// BACKWARD RECURSION
    int n;
    cin >> n;
    backwardrecurion(n,n);
    return 0;
}
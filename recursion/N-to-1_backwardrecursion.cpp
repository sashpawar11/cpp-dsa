#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Print N to 1 using backtracking recursion
// Take n = 3
// cannot use f(i-1, N)
void f(int i, int n){

    if(i > n) return;
    f(i+1,n);
    cout << i << endl;

}

int main()
{
#ifndef ONLINE_JUDGE
        freopen("../input1.txt", "r", stdin);
        freopen("../output1.txt", "w", stdout);
#endif

    int n;
    int i = 1;
    cin >> n;
    f(i,n);
    return 0;
}
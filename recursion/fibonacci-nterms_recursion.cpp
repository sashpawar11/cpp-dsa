#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.

Examples:

Example 1:
Input: N = 5
Output: 0 1 1 2 3 5
Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term.(0 based indexing)
*/

int printNthFibonacci(int n){

        if(n <= 1 ) return n;
        return printNthFibonacci(n-1) + printNthFibonacci(n-2);
}


int main()
{
#ifndef ONLINE_JUDGE
        freopen("../input1.txt", "r", stdin);
        freopen("../output1.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << printNthFibonacci(n) << endl;
    return 0;
}
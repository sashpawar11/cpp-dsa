#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Problem Statement: Given a number X,  print its factorial.

// To obtain the factorial of a number, it has to be multiplied by all the whole numbers preceding it. More precisely X! = X*(X-1)*(X-2) … 1.

// Note: X  is always a positive number. 

// Examples:

// Example 1:
// Input: X = 5
// Output: 120
// Explanation: 5! = 5*4*3*2*1

// Example 2:
// Input: X = 3
// Output: 6
// Explanation: 3!=3*2*1

int factorialOfN(int n){

        if(n==0) return 1;
        return n * factorialOfN(n-1);
}

int main()
{
#ifndef ONLINE_JUDGE
        freopen("../input1.txt", "r", stdin);
        freopen("../output1.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    cout << "factorial = " << factorialOfN(n) << endl;

    return 0;
}
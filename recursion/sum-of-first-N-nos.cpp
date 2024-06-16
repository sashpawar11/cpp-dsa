#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Problem statement: Given a number ‘N’, find out the sum of the first N natural numbers.

// Examples:

// Example 1:
// Input: N=5
// Output: 15
// Explanation: 1+2+3+4+5=15

// Example 2:
// Input: N=6
// Output: 21
// Explanation: 1+2+3+4+5+6=15

// parameterized recursion
void sumOfNaturalNumbers(int i,int n,int sum){

    if(i>n) {
        cout << sum;
        return;
    }
    sumOfNaturalNumbers(i+1,n,sum+i);

}
int main()
{
#ifndef ONLINE_JUDGE
        freopen("../input1.txt", "r", stdin);
        freopen("../output1.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    sumOfNaturalNumbers(1,n,0);
    return 0;
}
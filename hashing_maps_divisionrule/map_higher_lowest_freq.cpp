#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* Problem Statement: Given an array of size N. Find the highest and lowest frequency element.

Example 1:
Input: array[] = {10,5,10,15,10,5};
Output: 10 15
Explanation: The frequency of 10 is 3, i.e. the highest and the frequency of 15 is 1 i.e. the lowest.

*/

int main()
{
#ifndef ONLINE_JUDGE
        freopen("../input1.txt", "r", stdin);
        freopen("../output1.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    // precompute with unordered map
    unordered_map <int,int> mpp;
    for(int i = 0 ; i < n ; i++){
        mpp[arr[i]]++;
    }

    int min = INT_MAX;
    int max = INT_MIN;
    int min_element;
    int max_element;

    // calc max min element
    for(auto it: mpp){
        if(it.second > max){
            max = it.second;
            max_element = it.first;
        }
         if(it.second < min){
            min = it.second;
            min_element = it.first;
        }
    }

    cout << "Element with higher frequency is " << max_element << " with frequency of " << max << endl;

    cout << "Element with lowest frequency is " << min_element << " with frequency of " << min << endl;
    return 0;
}
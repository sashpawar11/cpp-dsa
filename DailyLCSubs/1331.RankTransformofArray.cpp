#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

  vector<int> arrayRankTransform(vector<int>& arr) {
            map<int,int>mpp;
            int rank = 1;
            for(int i = 0; i < arr.size(); i++){
                mpp.insert({arr[i], 0});
            };

            for(auto it = mpp.begin(); it != mpp.end(); it++){
                it -> second = rank;
                rank++;
            };

            for(int i = 0; i< arr.size(); i++){
                arr[i] = mpp[arr[i]];
            }

            return arr;

    }

int main()
{
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        cout<< "Hello";
        vector<int>inprr;

        int k;
        cin>> k;
        for(int i=0; i< k; i++){
            int x;
            cin >> x;
            inprr.push_back(x);
        };

        arrayRankTransform(inprr);
#endif
    return 0;
}
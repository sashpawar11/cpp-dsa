#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/*
Using Hashing theory,
finding fequency of elements using
MAP
*/
int main()
{
#ifndef ONLINE_JUDGE
        freopen("../input1.txt", "r", stdin);
        freopen("../output1.txt", "w", stdout);
#endif
    int n;
    int arr[n];
    
    cin >> n;
    
    for(int i = 0; i<n ;i++){
        cin >> arr[i];
    }

    //precompute using map  
    map <int,int> mpp;
    for(int i =0; i <n; i++){
        mpp[arr[i]]++;
    }

    //iterating a map using auto iterator
    for(auto it: mpp){
        cout << it.first << "->" << it.second << endl;
    }
    
     
    int q;
    cin >> q;
    while ( q--){
        int num;
        cin >> num;
        //fetch
        cout << mpp[num] << endl;
    }
  


    return 0;
}
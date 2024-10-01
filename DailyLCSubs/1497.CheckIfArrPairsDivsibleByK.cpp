#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Intuition ( LC Submitted code referred)
//For two integers ( a ) and ( b ), their sum ( (a + b) ) is divisible by ( k ) if the sum of their remainders when divided by ( k ) is either ( k ) or ( 0 ). This leads us to consider the remainders of each element when divided by ( k ).

    bool canArrange(vector<int>& arr, int k) {
        vector<int> freq(k, 0);
        for (int num : arr) {
            int rem = num % k;
            if (rem < 0) {
                rem += k;
            }
            freq[rem]++;
        }
        
        if (freq[0] % 2 != 0) {
            return false;
        }
        
        for (int i = 1; i <= k / 2; i++) {
            if (freq[i] != freq[k - i]) {
                return false;
            }
        }
        
        return true;
}

int main()
{
#ifndef ONLINE_JUDGE
    // Correct paths to reference the input and output files
    freopen("input.txt", "r", stdin); // Change this to your actual path
    freopen("output.txt", "w", stdout); // Change this to your actual path
#endif
    

    vector<int>inprr;
    int k;
    cin>> k;
    int num;
    cin >> num;
    for(int i = 0; i<num; i++){
        int x;
        cin >> x;
        inprr.push_back(x);
   }
    bool ans = canArrange(inprr,k) ;
    cout<<ans;
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findGCD(vector<int>& nums) {
        
    auto maxElement = *max_element(nums.begin(),nums.end());
    auto minElement = *min_element(nums.begin(),nums.end());

    int gcd = 1;
    for(int i = 1; i<= min(maxElement,minElement); i++){
        if( maxElement % i == 0 && minElement % i == 0){
            gcd = i;
        }
    }
    return gcd;
}

int main()
{
    vector<int> nums = {2,3,6,9,10};
    cout << findGCD(nums);
    return 0;
}
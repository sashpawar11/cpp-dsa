#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    int sumHighestAndLowestFrequency(vector<int>& nums) {

            
           unordered_map <int,int> mpp;
            for(int i = 0 ; i < nums.size(); i++){
                mpp[nums[i]]++;
            }

            int min = INT_MAX;
            int max = INT_MIN;


            // calc max min element
            for(auto it: mpp){
                if(it.second > max){
                    max = it.second;
                }
                if(it.second < min){
                   min = it.second;
                }
        }

        int finalSum = max + min;
        return finalSum;

    }

int main() {
 
   
    int n; 
    cin >> n;
    vector<int> nums;
    for(int i =0; i<n ; i++){
            int x;
            cin>>x;
            nums.push_back(x);
    }
    
    cout << "Sum of highest and lowest freq : "<< sumHighestAndLowestFrequency(nums);
    return 0;
}
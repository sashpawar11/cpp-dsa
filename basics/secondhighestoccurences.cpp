#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int secondMostFrequentElement(vector<int>& nums) {
           
        unordered_map <int,int> mpp;

        for(int i = 0 ; i< nums.size(); i++){
            mpp[nums[i]]++;
        };

        int highestElem = -1;
        int highestFreq = 0;
        int secondHighestElem = -1;
        int secondHighestFreq = 0;

        for(auto it: mpp){
            int elem = it.first;
            int freq = it.second;
    int secondMostFrequentElement(vector<int>& nums) {
           
        unordered_map <int,int> mpp;

        for(int i = 0 ; i< nums.size(); i++){
            mpp[nums[i]]++;
        };

        int highestElem = -1;
        int highestFreq = 0;
        int secondHighestElem = -1;
        int secondHighestFreq = 0;

        for(auto it: mpp){
            int elem = it.first;
            int freq = it.second;


            if(freq > highestFreq){
                secondHighestFreq = highestFreq;
                secondHighestElem = highestElem;
                highestElem = elem;
                highestFreq = freq;
              
            }
            else if(freq == highestFreq){
                highestElem = min(elem,highestElem);
            }
            else if( freq > secondHighestFreq){
                secondHighestFreq = freq;
                secondHighestElem = elem;
            }
            else if ( freq == secondHighestFreq){
                secondHighestElem = min(secondHighestElem,elem);
            }

        }
        return secondHighestElem;
    }

            if(freq > highestFreq){
                secondHighestFreq = highestFreq;
                secondHighestElem = highestElem;
                highestElem = elem;
                highestFreq = freq;
              
            }
            else if(freq == highestFreq){
                highestElem = min(elem,highestElem);
            }
            else if( freq > secondHighestFreq){
                secondHighestFreq = freq;
                secondHighestElem = elem;
            }
            else if ( freq == secondHighestFreq){
                secondHighestElem = min(secondHighestElem,elem);
            }

        }
        return secondHighestElem;
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
    
    cout << "Second Highest Occuring element is : "<< secondMostFrequentElement(nums);
    return 0;
}
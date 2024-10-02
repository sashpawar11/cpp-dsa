#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

  vector<int> arrayRankTransform(vector<int>& arr) {
            map<int,int>sortedmpp;
            int rank = 1;
            for(int i=0; i< arr.size(); i++){
                sortedmpp.insert({arr[i], 0});
            }

    

            //sort(sortedmpp.begin(), sortedmpp.end());
        

                for (auto iter = sortedmpp.begin(); iter != sortedmpp.end(); ++iter)
                {
                   cout << iter -> first << " : " << iter -> second << " "; // Could also have used cur->y = iter->second;
                }

                for(int i=0; i< arr.size(); i++){
                    sortedmpp[arr[i]] = rank;
                    rank++;
                } 

                for(int i=0; i< arr.size(); i++){
                      if (sortedmpp.find(arr[i]) != sortedmpp.end()) {
                        cout <<  sortedmpp[arr[i]] << endl;
                      }
                        arr[i] = sortedmpp[arr[i]];
                       
                }

                for(int i=0; i< arr.size(); i++){
                        cout << endl;
                        cout << arr[i] << " ";
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
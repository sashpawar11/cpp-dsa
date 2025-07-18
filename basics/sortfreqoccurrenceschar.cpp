#include<iostream>
#include<bits/stdc++.h>

using namespace std;


bool comparator(pair<int,char> p1, pair<int,char> p2){

    if( p1.first > p2.first) return true;
    if( p1.first < p2.first) return false;
    return p1.second < p2.second;

}
vector<char> frequencySort(string& s){
			//your code goes here

            // INITIALIZE FREQ vec
            pair<int,char> freqarr[26];
            int i =  0;
            for( int i = 0; i< 26; i++){
                freqarr[i] = {0, i + 'a'};
            }

            for(char x : s){
                freqarr[x - 'a'].first++;
            }

            sort(freqarr, freqarr + 26, comparator);

            // for( pair<int,char> x: freqarr){
            //     cout << x.first << " : " << x.second << endl;
            // }
            vector<char> result;
            for( pair<int,char> x: freqarr){
                if(x.first > 0) result.push_back(x.second);
            }

            return result;
            

}       

int main() {

    string str;
    cin >> str;
    vector<char> result = frequencySort(str);

    for(int i = 0; i< result.size(); i++){
        cout << result[i] << " ";
    }

 
    return 0;
}
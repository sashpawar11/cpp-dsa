#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> divisors(int n) {

    vector<int>divisors;

    for(int i = 1; i <=n; i++){
        if( n % i == 0){
            divisors.push_back(i);
        }
    }
   

    return divisors;
            
}

int main(){
    
    int num;
    cin >> num;

    vector<int> resultvec = divisors(num);
    for(auto it : resultvec){
        cout << it << " ";
    }
    
    return 0;
}
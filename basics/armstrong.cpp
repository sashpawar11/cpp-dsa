#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {

    // esay way to get number of digits --> log10(abs(n)) + 1 
    int power = log10(abs(n)) + 1;
    
    int sum = 0;
    int orignalNum = n;
    while(n>0){
        int digit = n % 10;
        sum += pow(digit,power);
        n = n/10;
    }
    if(sum == orignalNum) return true;
    return false;
}

int main(){
    
    int num;
    cin >> num;
    cout << isArmstrong(num);
    
    return 0;
}
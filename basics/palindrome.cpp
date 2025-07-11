#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
        
        if(n==0) return true;

        int reverseNum = 0;
        int orignalNum = n;
    
        while(n >0){
            int digit = n%10;
            n = n /10;
            reverseNum = (reverseNum * 10 )+ digit;
        }

        if (orignalNum == reverseNum) {  return true; }
        return false;
}


int main(){
 
 
    int num = 0;
    cin >> num;

    cout << isPalindrome(num);
    return 0;
}
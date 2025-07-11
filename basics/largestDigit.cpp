#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int largestDigit(int n) {
    int largest = INT_MIN;
    if(n==0 ) return 0;
    while ( n > 0){
        int digit = n %10;
        if(digit > largest){
            largest = digit;
        }
        n = n /10;
    }
    return largest;
  
}



int main(){
 
 
    int num = 0;
    cin >> num;

    cout << largestDigit(num)<< endl;
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
        
        if(x==0) return 0;

        int reverseNum = 0;
    
        while(x >0){
            int digit = x%10;
            x = x /10;
            reverseNum = reverseNum * 10 + digit;
        }
        return reverseNum;
}

int main()
{

    int num = 0;
    cin >> num;

    cout << reverse(num);
    return 0;
}


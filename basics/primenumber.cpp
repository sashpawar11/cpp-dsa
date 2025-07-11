#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0){
            return false;
        }
    }
    return true; 
}
int main() {
 


    int num;
    cin >> num;
    cout << isPrime(num);
    

 
    return 0;
}
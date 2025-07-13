#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int x){

    for(int i = 2; i< x; i++){
        if(x%i == 0){
            return false;
        }
    }

    return true;

}
int primeUptoN(int n) {

    if(n==1) return 0;;
    int countOfPrime = 0;

    for(int i=2 ; i<=n; i++) {

        if(checkPrime(i)) countOfPrime++;
    }

    return countOfPrime;
}

int main() {
 
    int num = 0;
    cin >> num;

    cout << primeUptoN(num);
    return 0;
}
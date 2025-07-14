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
int LCM(int n1,int n2) {

    int minElement = min(n1,n2);
    int maxElement = max(n1,n2);

    bool found = false;
    int count = 1;
    while(!found){
        int x = minElement * count;
        if(x % maxElement == 0 ){
            found = true;
            return x;
        }
        count = count + 1;
    }
    
    return 0;
        
}

int main() {
 
    int num1, num2;
    cin >> num1 >> num2;

    cout << LCM(num1,num2);
    return 0;
}
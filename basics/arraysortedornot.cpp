#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool arraySortedOrNot(int arr[], int n) {
        for(int i = 0 ; i< n; i++){
            if(i == (n-1)){
                return true;
            }
            if(arr[i] > arr[i+1]){
                return false;
            }
        }
        return true;
}
int main() {
 
    int num = 0;
    int arr[num];
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }

    cout << arraySortedOrNot(arr, num);
 
    return 0;
}
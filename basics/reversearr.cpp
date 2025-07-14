#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){
       int p1 = 0;
       int p2 = n-1;

       while(p1 <= n/2 && p2 >= n/2){
            int temp = arr[p2];
            arr[p2] = arr[p1];
            arr[p1] = temp;
            p1++;
            p2--;
       }
}

int main() {
    int num = 0;
    cin >> num;
    int arr[num];
    for(int i =0; i< num; i++){
        cin >> arr[i];
    }
 
    return 0;
}
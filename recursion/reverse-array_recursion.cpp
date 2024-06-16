#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Example 1:
// Input: N = 5, arr[] = {5,4,3,2,1}
// Output: {1,2,3,4,5}
// Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

// Example 2:
// Input: N=6 arr[] = {10,20,30,40}
// Output: {40,30,20,10}
// Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.


void printarr(int arr[],int n) {

    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
}
void reverseArr(int arr[],int start, int end){

        if(start<end){
            swap(arr[start], arr[end]);
            return reverseArr(arr, start + 1, end - 1);
        }

}

int main()
{
#ifndef ONLINE_JUDGE
        freopen("../input1.txt", "r", stdin);
        freopen("../output1.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i<n;i++){
        cin >> arr[i];
    }

    reverseArr(arr,0,n-1);
    printarr(arr,n);
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
SELECTION SORT
IMPLEMENTATION
*/

void selection_sot(int arr[], int n){

    int idx_min;

    for (int i = 0 ; i <= n-2 ; i++){

        idx_min = i;

        for ( int j = i; j<= n-1; j++){
            
            if( arr[j] < arr[idx_min]) idx_min = j;
        }

        swap(arr[idx_min], arr[i]);
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
    for ( int i = 0; i<n; i++){
        cin >> arr[i];
    }

    // Selection Sort
    selection_sot(arr,n);

    for ( int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }



    return 0;
}
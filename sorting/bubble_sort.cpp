#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/*
BUBBLE SORT

Pushes max to the end using adjactent swap rounds
*/

void bubble_sort(int arr[], int n){

    int idx_max;

    for(int i = n-1; i >= 1; i--){

        for(int j = 0; j<= i - 1; j++){

            if(arr[j] > arr[j+1]){

                swap(arr[j], arr[j+1]);

            }

        }
    }

}
int main()
{
#ifndef ONLINE_JUDGE
        freopen("../input1.txt", "r", stdin);
        freopen("../output1.txt", "w", stdout);
        int n;

        cin >> n;
        int arr[n];

        for(int i = 0; i<= n-1; i++){
            cin >> arr[i];
        }

        bubble_sort(arr, n);

        for(int i = 0; i<= n-1; i++){
            cout << arr[i] << " ";
        }

#endif
    return 0;
}
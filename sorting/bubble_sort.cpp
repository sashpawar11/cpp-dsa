#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/*
BUBBLE SORT
Pushes max to the end using adjactent swap rounds

TIME COMPLEXITY:
WORST CASE & AVG CASE --> O (n^2)
BEST CASE ---> Array already in sorted order -> O(n)
*/

void bubble_sort(int arr[], int n){

    int idx_max;

    for(int i = n-1; i >= 0; i--){

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
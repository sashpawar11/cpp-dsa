#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/*
INSERTION SORT
- Takes an element and places it in its correct order
*/

void insertion_sort(int arr[], int n){

    int i, j;

    for(i = 0; i <= n-1; i++){

        j = i;

        while ( j > 0 && arr[j-1] > arr[j]){

            swap(arr[j-1], arr[j]);
            j--;
        }
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
    int arr [n];

    for(int i = 0 ; i< n ; i++){

        cin >> arr[i];
    }

    insertion_sort(arr,n);

    for(int i = 0 ; i< n ; i++){

        cout << arr[i] << " ";
    }


    return 0;
}
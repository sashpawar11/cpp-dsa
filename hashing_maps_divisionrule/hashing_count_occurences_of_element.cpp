#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Understanding Hashing Theory
/*

NUMBER HASHING :
Example - find frequecncy of element occurencies in an array
Input:
5 (number of elements in arr)
1 3 2 1 3 (elements)
5 ( how many elements to find occurencies for)
1
4
2
3
12

*/

/* --------------------
arr size globally can be declacred with upto 10^8
eg : int arr[1e7]  ( size 10^7)

but inside main:
it can go only till 10^6
*/

int main()
{

    int n,x;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i<n; i++){
        cin >> arr[i];
    }


    //precompute hasharray
    // assume size of hasharray based on question
    int hash_arr[13] = {0};
    // max int arr size can be declared with 10^6 inside main


    for ( int i = 0; i < n; i++){
            hash_arr[arr[i]] += 1;
    }

    //fetch
    cin >> x;
    while ( x--){
        int number;
        cin >> number;
        cout << "Frequency of " << number << " is : " << hash_arr[number] << endl;
    }

    return 0;
}
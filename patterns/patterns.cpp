#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    cout << n;
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++)
        {
            cout << "*";

        }
        cout << endl;

    }

    return 0;
}
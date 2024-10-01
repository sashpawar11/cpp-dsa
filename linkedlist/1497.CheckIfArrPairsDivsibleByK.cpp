#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    // Correct paths to reference the input and output files
    freopen("input.txt", "r", stdin); // Change this to your actual path
    freopen("output.txt", "w", stdout); // Change this to your actual path
#endif

    char cwd[PATH_MAX];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        cout << "Current working dir: " << cwd << endl;
    } else {
        perror("getcwd() error");
        return 1;
    }
    cout<<"Text"<<endl;
    return 0;
}
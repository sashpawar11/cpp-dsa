#include<iostream>
#include<bits/stdc++.h>

struct Node {

    int value;
    Node* next;

    // Initialize node strcut using cpp initializer list

    Node(int val) : value(val) , next(nullptr) {}

}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    // headptr intiialize to first node
    Node* head = new Node(1)

    cout << "The value at head is" << head -> value << '\n'
    
}
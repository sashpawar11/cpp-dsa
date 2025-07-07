#include<bits/stdc++.h>
using namespace std;



int main()
{
    
   //------------------------------------------------------
    // Vector
    vector<int> numbers = {2,4,1,3};
    vector<int> alternateVector (5);
    
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.push_back(6);
    numbers.emplace_back(8);

    sort(numbers.begin(),numbers.end());

     cout << endl <<  "Normal loopiong through vector: " << endl;

    for(int num : numbers){
        cout << num << " ";
    }
    cout << endl << "Size of vector: " << numbers.size()<< endl;


    // Vector Iterators
    // vector<int>::iterator beginItr = numbers.begin();    // returns pointer to memory location of first element
    // vector<int>::iterator endItr = numbers.end();    // returns pointer to memory location after the last element in the vector
    
    // easier way to declare iterators using 'auto' keyword - automatically defines type of iteratoty
    auto beginItr = numbers.begin();
    auto endItr = numbers.end();
    
    cout << *beginItr << endl;
    cout << *endItr << endl; 

     cout << endl << "Looping using Vector Iterator " << endl;
    for(auto i = beginItr; i < endItr; i++){
        cout<< *i << " ";
    }

    cout << endl <<  "Looping using auto Iterator " << endl;
    // without declaring the iterator, directly using auto in for loop:
    for ( auto i : numbers){
        cout<< i << " ";
    }

    // Reverse Iterator
    cout << endl <<  "Looping using auto reverse iterator " << endl;
    auto reverseBegin = numbers.rbegin();   /// returns pointer before the first element
    auto reverseEnd = numbers.rend();   /// returns pointer to the last element

    for ( auto i = reverseBegin; i < reverseEnd; i++){
        cout << *i << " ";
    }

    // Creating copies of vector:
    cout << endl <<  "Looping a duplicated copy of vector" << endl;
    vector<int> dupVect(numbers.begin(), numbers.end());
    for ( auto i : dupVect){
        cout << i << " ";
    }

    cout << endl << numbers.front() << " "; // get the first element
    cout << numbers.back() << endl; // get the first element


    // delete single element or range of elements
    numbers.erase(numbers.begin(), numbers.end() - 3);
    for ( auto i : numbers){
        cout << i << " ";
    }
    cout << endl;
    // insert at specifci position
    numbers.insert(numbers.begin() + 2 , {5,6});
    for ( auto i : numbers){
        cout << i << " ";
    }
    //----  --------------------------------------------------
    // Pair Class
    cout << endl << "Pair Class " << endl;
    pair<int,int> pr1 = {2,8};   // or make_pair(2,8)
    cout << pr1.first << " " << pr1.second << endl;
   

    return 0;
}

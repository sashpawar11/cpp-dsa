#include<bits/stdc++.h>
using namespace std;




/*
Internals::

Vectors - use arrays behind the scenes
List and Deque - use linked list behind the scenes

*/

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

    //----  --------------------------------------------------
    // List Class  -- Supports all the methods as vector, difference - list supports push at front ,which vector does not
    cout << endl << "List Class " << endl;
    list<int> ls;
    ls.push_front(1);
    ls.push_front(16);
    ls.push_front(9);

    for(auto i: ls){
        cout << i << " ";
    }

    //------------------------------------------------------
    // Stack Class  -- LIFO datastructure
    cout << endl << "Stack Class " << endl;
    stack<int> books;
    books.push(1);
    books.push(2);
    books.push(3);

    cout<< books.top() << endl;

    // Iterating through a stack
    while(!books.empty()){
           cout<< books.top() << " " ; //
           books.pop();

    }
    // books.pop();
    // books.pop();
    // books.pop();
    // cout<< books.top() << endl;   // empty stack ( should show runtime err)


    //------------------------------------------------------
    // Queue Class  -- FIFO datastructure -- similar to stack
    cout << endl << "Queue Class " << endl;
    queue<int> bustop;
    bustop.push(1);
    bustop.push(2);
    bustop.push(3);
    bustop.push(4);

    cout << bustop.front() << " " << bustop.back();


    //------------------------------------------------------
    // Priority Queue Class  -- Stores the highest element at the top
     cout << endl << "Priority Queue Class " << endl;
    priority_queue<int> pq;
    pq.push(1);
    pq.push(15);
    pq.push(12);
    pq.push(467);
    pq.push(77);

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << endl <<  "Min-heap priority queue" << endl;
    // to make a priorirty queue that stores smallest elemnts at top ( min-heap)
    priority_queue<int , vector<int>, greater<int>> spq;
    spq.push(1);
    spq.push(15);
    spq.push(12);
    spq.push(467);
    spq.push(77);

    while(!spq.empty()){
        cout << spq.top() << " ";
        spq.pop();
    }


    //------------------------------------------------------
    // Set Class  - stores only unique elements and in ascending order,
    // Stores everything in ascending order
    cout << endl << endl << "Set Class " << endl; 
    set<int> myset;
    myset.insert(1);
    myset.insert(6);
    myset.insert(1);
    myset.insert(13);
    myset.insert(16);
    myset.insert(24);
    myset.insert(7);
    myset.insert(90);

    for(auto i: myset){
        cout << i << " ";
    }

    auto it = myset.find(13);

    // check for element
    if(it != myset.end()){
         cout << endl << "Find 13 in set - " << *it <<endl;
    }

    //elements can be also found using .count
    cout  << "Find for 16 using count - " << myset.count(5)<<endl;
   


    // finding elem ent i.e. >=  to a given element
    auto i = myset.lower_bound(16);

    cout << endl << *i;

    // finding elenet i.e. >  to a given element
    auto x = myset.upper_bound(6);
    cout << endl << *x;


    cout << endl;
   //remove elements from set using erase
    myset.erase(13);
    for(auto i: myset){
        cout << i << " ";
    }


    auto it1 = myset.begin();
    it1++;

    auto it2 = myset.end();
    it2--;

    cout << endl;
    // remove using range
    myset.erase(it1,it2);
    for(auto it: myset){
        cout << it << " ";
    }


    //------------------------------------------------------
    // MultiSet Class  - similar to set, stores duplicate elements as well.
    // Stores everything in ascending order
    // functions similar to set
    
    cout << endl << endl << "MultiSet Class " << endl; 
    multiset<int> mymultiset;

    mymultiset.insert(1);
    mymultiset.insert(6);
    mymultiset.insert(6);
    mymultiset.insert(1);

    for(auto i : mymultiset){
        cout << i << " ";
    }

    //------------------------------------------------------
    // UnorderedSet Class  - similar to set, but not sorted
    // Does not support lower and upper bounds since elements are not sorted
    // Has Better TimeComplexity when searching ( constant time complexity almost , for average size datasets, if huge dataset -> choose set)
    // functions similar to set
    
    cout << endl << endl << "Unordered Set Class " << endl; 
    unordered_set<int> myunorderedset;
    myunorderedset.insert(2);
    myunorderedset.insert(562);
    myunorderedset.insert(24);
    myunorderedset.insert(13);
    myunorderedset.insert(245);
    for(auto i : myunorderedset){
        cout << i << " ";
    }



    //------------------------------------------------------
    // Map Class  - Stores key value pairs
    // stoes keys in acending order
    // Time complexity : O(logN)
    cout << endl << endl << "Map Class " << endl; 

    map<int,string> mymap;
    mymap.insert({1, "Saish"});
    mymap.insert({2, "Pawar"});
    mymap.insert({13, "Cool"});

    for(auto i: mymap){
        cout << i.first << " : " << i.second << ", ";
    }

    auto mapit = mymap.find(2);
    cout << endl << (*mapit).first << "->" << (*mapit).second;



    
    //------------------------------------------------------
    // Unordered Map Class  - Stores key value pairs
    // Has fast time complexity when searching ( not for a large dataset)
    // stoes keys in acending order
    cout << endl << endl << "Unordered Map Class " << endl; 

    unordered_map<int,string> myunmap;
    myunmap.insert({1, "Saish"});
    myunmap.insert({2, "Pawar"});
    myunmap.insert({13, "Cool"});

    for(auto i: myunmap){
        cout << i.first << " : " << i.second << ", ";
    }



      
    //------------------------------------------------------
    // MultiMap Class  - Stores duplicate keys as well
    // stoes keys in acending order
    cout << endl << endl << "MultiMap Map Class " << endl; 

    multimap<int,string> mymultimap;
    mymultimap.insert({1, "Saish"});
    mymultimap.insert({2, "Pawar"});
    mymultimap.insert({1, "Grok"});
    mymultimap.insert({2, "New"});
    mymultimap.insert({2, "Test"});
    mymultimap.insert({2, "et"});
    mymultimap.insert({2, "q24"});
    mymultimap.insert({2, "tuf"});

    for(auto i: mymultimap){
        cout << i.first << " : " << i.second << ", ";
    }
     cout << endl;
    // find position range of an element 
    auto rangeitr = mymultimap.equal_range(2);
    for (auto i = rangeitr.first ; i !=  rangeitr.second; i++){
        cout << (*i).first << "->" << (*i).second << ", ";
    }


    //--------------------------------------------
    /// FUNCTIONS AND ALGORITHMS


    // Sort function()
    cout << endl << endl << "Sort Function Map Class " << endl; 

    // on arrays
    int arr[5] = {1 ,6 ,52,24 ,2};
    sort(arr , arr + 2);
    for (int i =0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    // on vectors
    vector<int> vec = {1 ,6 ,52,24 ,2};
    sort(vec.begin() +  1, vec.begin() + 4);
    for (auto itr: vec){
        cout << itr << " ";
    }



    return 0;
}

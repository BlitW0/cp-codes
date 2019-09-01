#include <bits/stdc++.h>
using namespace std;

// #include <set> for set

int main() {
    
    // Declaring set
    set <int> s;

    // Declaring Iterator for a set container
    set <int> :: iterator itr;

    // Inserting values
    s.insert(10);
    s.insert(20);
    s.insert(40);
    s.insert(60);
    s.insert(70);

    // Printing elements in inorder fashion for the avl tree
    for(itr = s.begin(); itr != s.end(); itr++)
	cout << *itr << " ";
    cout << endl;

    // find() returns pointer to the element we need to find
    cout << *(s.find(20)) << endl;

    // Properties of insert when inserting multiple values in a set
    pair < set <int> :: iterator, bool > r;
    r = s.insert(20);
    cout << r.second << endl; // 0; first is iterator to the element, bool gives true if element was inserted and false if not. If it is already there in the set it is not inserted in the set and the bool value returns false.
    r = s.insert(30);
    cout << r.second << endl; // 1

    itr = s.begin();
    s.insert(100);
    cout << *(s.begin()) << endl; // Wrong info, need to reassign value to itr
    itr = s.begin();

    cout << *(s.lower_bound(20)) << endl; // leftmost element (>= no.) where you can insert that element while maintaining it sorted
    cout << *(s.upper_bound(20)) << endl; // rightmost element (> no.) where you can insert the element while maintaining it sorted

    *itr = 10; // Wrong, can't assign value to an iterator for a set. Can do for an iterator for a vector.

    return 0;
}

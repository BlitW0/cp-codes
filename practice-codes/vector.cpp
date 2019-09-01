#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v; vector <int> :: iterator itr;
    for(int i = 1; i <= 20; i++)
	v.push_back(i);
    itr = s.begin();
    itr = itr + 5; // works only for vector
    itr = itr + 100; // but must not go out of bounds
    return 0;
}

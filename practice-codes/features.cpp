#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;

    for(int i = 1; i <= 10; i++)
	v.push_back(i);

    string str = "acabac", a = "a", c = "c";

    // Returns sum of all elements from v.begin() and v.end() and 3rd argument if the initial value of that sum
    cout << accumulate(v.begin(), v.end(), 0) << endl;

    // Returns max element of elements from itr1 to itr2
    cout << *max_element(v.begin(), v.end()) << endl;

    // Returns min element of elements from itr1 to itr2
    cout << *min_element(v.begin(), v.end()) << '\n';

    // Returns number of occurrences of 3rd arg between itr1 to itr2
    cout << count(v.begin(), v.end(), 2) << endl;

    // Returns v.end() if 3rd arg is not present else points to it
    cout << *(find(v.begin(), v.end(), 10)) << endl;



    return 0;
}

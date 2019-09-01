#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    for(ll i = 0; i < 10; i++) {
        string s;
        cout << i << endl;
        getline(cin, s);
        if(s != "no") {
            if(s == "great" || s == "cool" || s == "not bad" || s == "don't think so" || s == "don't touch me")
                cout << "normal\n";
            else cout << "grumpy\n";
        }
    }
    return 0;
}
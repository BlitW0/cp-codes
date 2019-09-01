/**
 * Code for BIT in the form of class BIT
 * 
 * Constructor:
 *      int n -> number of elements in input array
 * 
 * Attributes:
 *      Private:
 *          vector <ll> bit -> the tree
 *          int n -> binding number of elements to class
 * 
 * Methods:
 *      Public:
 *          void update(ind, val) -> add value val at index ind
 *          ll query(ind) -> get prefix sum till index ind [0..ind]
 * 
 * (indexing is 1-based)
 * Pre-usage code:
 *
 *      BIT bit(n);
 *      for (int i = 0; i < n; i++)
 *          bit.update(i + 1, a[i]);
 **/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;



// -------------------> MAIN CODE
class BIT {
    vector <ll> bit;
    int n;

    public:

    BIT(int n) {
        bit.assign(n + 1, 0);
        this->n = n;
    }

    // Add val to index ind
    void update(int ind, ll val) {
        for (; ind <= n; ind += ind&-ind)
            bit[ind] += val;
    }

    // Get prefix sum of all elements till index ind: [0..ind]
    ll query(int ind) {
        ll res = 0;
        for (; ind; ind -= ind&-ind)
            res += bit[ind];
        return res;
    }
};
// -------------------------->



// DRIVER FUNCTION
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    BIT bit(n);
    for (int i = 0; i < n; i++)
        bit.update(i + 1, a[i]);

    for (int i = 0; i < n; i++)
        cout << bit.query(i + 1) << ' ';
    cout << '\n';
    return 0;
}

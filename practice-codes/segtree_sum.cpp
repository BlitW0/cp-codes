#include <bits/stdc++.h>
using namespace std;
#define MAX 100007

int tree[2*MAX], a[MAX];

void build(int lo, int hi, int ind) {
    if(lo == hi) {
        tree[ind] = a[lo];
        return;
    }
    int mid = (lo + hi)/2;
    build(lo, mid, 2*ind + 1), build(mid + 1, hi, 2*ind + 2);
    tree[ind] = tree[2*ind + 1] + tree[2*ind + 2];
}

int query(int l, int r, int lo, int hi, int ind) {
    int mid = (lo + hi)/2;
    if(l == lo + 1 && r == hi + 1) return tree[ind];
    else if(l > hi + 1 || r < lo + 1) return 0;
    else {
        if(l > mid)
            return query(l, r, mid + 1, hi, 2*ind + 2);
        else if(r <= mid)
            return query(l, r, lo, mid, 2*ind + 1);
        else
            return query(l, mid, lo, mid, 2*ind + 1) + query(mid + 1, r, mid + 1, hi, 2*ind + 2);
    }
}

void update(int lo, int hi, int ind, int pos, int val) {
    tree[ind] += val - a[pos];
    if(lo == hi) return;
    int mid = (lo + hi)/2;
    if(pos <= mid) update(lo, mid, 2*ind + 1, pos, val);
    else update(mid + 1, hi, 2*ind + 2, pos, val);
}

int main() {
    int n, q; cin >> n >> q;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    build(0, n - 1, 0);
    int type;
    while(q--) {
        cin >> type;
        if(type) {
            int l, r;
            cin >> l >> r;
            cout << query(l, r, 0, n - 1, 0) << '\n';
        } else {
            int pos, val;
            cin >> pos >> val;
            update(0, n - 1, 0, pos - 1, val);
        }
    }
    return 0;
}
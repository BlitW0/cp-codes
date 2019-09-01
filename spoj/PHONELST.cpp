#include <bits/stdc++.h>
using namespace std;

struct node
{
    node* pres[10];
    bool end;
};

node* make()
{
    node* x = (node*) malloc(sizeof(node));
    for(int i = 0; i < 10; i++)
	x->pres[i] = NULL;
    x->end = 0;
    return x;
}

void insert(string s, node* root)
{
    for(int i = 0; i < s.length(); i++) {
	if(root->pres[s[i] - '0'] == NULL) {
	    node* tmp; tmp = make();
	    root->pres[s[i] - '0'] = tmp;
	}
	root = root->pres[s[i] - '0'];
    }
    root->end = 1;
}

bool null(node* root)
{
    for(int i = 0; i < 10; i++)
	if(root->pres[i] != NULL)
	    return 0;
    return 1;
}

bool check(node* root)
{
    if(null(root)) return 0;
    if(root->end == 1) return 1;
    for(int i = 0; i < 10; i++) {
	if(root->pres[i] == NULL) continue;
	if(check(root->pres[i])) return 1;
    }
}

int main()
{
    int t; cin >> t;
    while(t--) {
	int n; cin >> n; string s;
	node *root; root = make();
	for(int i = 0; i < n; i++) {
	    cin >> s;
	    insert(s, root);
	}
	(!check(root)) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node* next;
};

node* push(node* head, int val)
{
    node* temp = (node*) malloc(sizeof(node));
    temp->val = val; temp->next = head;
    return temp;
}

node* pop(node* head)
{
    if(head == NULL) return head;
    node* temp = head->next;
    free(head);
    return temp;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
	string s; cin >> s;
	int n = s.length();
	node* a[26]; int cnt[26] = {0};
	for(int i = 0; i < 26; i++)
	    a[i] = NULL;
	for(int i = 0; i < s.length(); i++)
	{
	    a[s[i] - 'a'] = push(a[s[i] - 'a'], i + 1);
	    cnt[s[i] - 'a']++;
	}
	int odd = 0, oddc;
	for(int i = 0; i < 26; i++)
	{
	    if(cnt[i]%2 != 0)
	    { odd++; oddc = i; }
	}
	if(odd > 1)
	{
	    cout << -1 << endl;
	    continue;
	}
	int out[100007]; int k = 0, j = n - 1;
	if(n%2 != 0)
	{
	    out[(n - 1)/2] = a[oddc]->val;
	    a[oddc] = pop(a[oddc]);
	}
	for(int i = 0; i < 26; i++)
	{
	    while(a[i] != NULL && k < j)
	    {
		out[k++] = a[i]->val;
		a[i] = pop(a[i]);
		out[j--] = a[i]->val;
		a[i] = pop(a[i]);
	    }
	}
	for(int i = 0; i < n; i++)
	    cout << out[i] << " ";
	cout << endl;
    }
}

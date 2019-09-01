#include <stdio.h>
typedef long long ll;
 
typedef struct node
{
	ll val;
	ll pos;
} node;
 
int main()
{
	ll n, i;
	scanf("%lld", &n);
	node a[100007];
	a[0].val = 0; a[0].pos = 0;
	for(i = 1; i <= n; i++)
	{
		scanf("%lld", &a[i].val);
		a[i].pos = i;
	}
	ll st[100007] = {0}; ll top = -1;
	ll l[100007], r[100007];
	st[++top] = a[0].pos;
	for(i = 1; i <= n; i++)
	{
		while(a[st[top]].val >= a[i].val && top != 0)
			top--;
		l[i] = st[top];
		st[++top] = a[i].pos;
	}
	top = 0; st[top] = n + 1;
	for(i = n; i >= 1; i--)
	{
		while(a[st[top]].val >= a[i].val && top != 0)
			top--;
		r[i] = st[top];
		st[++top] = a[i].pos;
	}
	ll max = -1;
	for(i = 1; i <= n; i++)
		if((r[i] - l[i] - 1)*a[i].val > max)
			max = (r[i] - l[i] - 1)*a[i].val;
	printf("%lld\n", max);
	return 0;
}
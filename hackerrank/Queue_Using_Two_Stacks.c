#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node* next;
} node;

node* enque(node* tail, int val)
{
    node* temp = (node*) malloc(sizeof(node));
    temp->val = val; temp->next = NULL;
    if(tail == NULL) return temp;
    tail->next = temp;
    return temp;
}

node* deque(node* head)
{
    if(head == NULL) return head;
    node* temp = head->next;
    free(head);
    return temp;
}

int main()
{
    int q; scanf("%d", &q);
    int i, type;
    node *head = NULL, *tail = NULL;
    for(i = 0; i < q; i++)
    {
	scanf("%d", &type);
	if(type == 1)
	{
	    int val; scanf("%d", &val);
	    tail = enque(tail, val);
	    if(head == NULL) head = tail;
	}
	else if(type == 2)
	    head = deque(head);
	else
	    printf("%d\n", head->val);
    }
    return 0;
}

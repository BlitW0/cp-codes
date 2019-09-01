#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char oper;
    int val;
    struct node* next;
} node;

node* push(int x, char oper, node* head)
{
    node* temp = (node*) malloc(sizeof(node));
    temp->oper = oper; temp->val = x;
    temp->next = head; head = temp;
    return head;
}

node* pop(node* head)
{
    if(head == NULL) return head;
    node* temp = head->next;
    free(head); head = temp;
    return head;
}

int main()
{
    char str[407];
    int t, i;
    scanf("%d", &t);
    while(t--)
    {
	scanf("%s", str);
	node* head = NULL;
	for(i = 0; str[i] != '\0'; i++)
	{
	    if(str[i] == '(')
		head = push(-1, '(', head);
	    else if(str[i] == ')')
	    {
		for(; head->oper != '('; head = pop(head))
		    printf("%c", head->oper);
		head = pop(head);
	    }
	    else if(str[i] == '+')
	    {
		for(; head->val >= 1; head = pop(head))
		    printf("%c", head->oper);
		head = push(1, '+', head);
	    }
	    else if(str[i] == '-')
	    {
		for(; head->val >= 0; head = pop(head))
		    printf("%c", head->oper);
		head = push(0, '-', head);
	    }
	    else if(str[i] == '*')
	    {
		for(; head->val >= 2; head = pop(head))
		    printf("%c", head->oper);
		head = push(2, '*', head);
	    }
	    else if(str[i] == '/')
	    {
		for(; head->val >= 3; head = pop(head))
		    printf("%c", head->oper);
		head = push(3, '/', head);
	    }
	    else if(str[i] == '^')
	    {
		head = push(4, '^', head);
	    }
	    else
	    	printf("%c", str[i]);
	}
	printf("\n");
    }
    return 0;
}

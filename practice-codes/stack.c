#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node* next;
} node;

node* push(int x, node* top)
{
    node* temp = (node*) malloc(sizeof(node));
    temp->val = x; temp->next = top;
    return temp;
}

node* pop(node* top)
{
    if(top == NULL) {
	printf("Stack is empty!\n");
	return top; }
    node* temp = top->next;
    free(top); top = temp;
    return top;
}

int main()
{
    int t, n;
    printf("Options:\n");
    printf("1: Push element onto stack\n");
    printf("2: Pop element from stack\n");
    printf("3: Print top of the stack\n");
    printf("0: Exit\n");
    node* top = NULL;
    while(1)
    {
	printf("Enter option: ");
	scanf("%d", &t);
	if(!t)
	    break;
	else if(t == 1) {
	    printf("Enter value: ");
	    scanf("%d", &n);
	    top = push(n, top); }
	else if(t == 2) {
	    top = pop(top); }
	else if(t == 3) {
	    if(top == NULL) printf("Stack is empty!\n");
	    else printf("top: %d\n", top->val); }
    }
    return 0;
}

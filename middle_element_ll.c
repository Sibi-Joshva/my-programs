#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *nxt;
};

struct node *head;

struct node *insert(struct node *head, int n[], int l)
{
    for(int i=0;i<l;i++)
    {
        struct node *new_node, *curr;

        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = n[i];
        new_node->nxt  = NULL;

        if(head == NULL)
        {
            head = new_node;
        }
        else
        {
            curr = head;
            while(curr->nxt != NULL)
            {
                curr = curr->nxt;
            }
            curr->nxt = new_node;
        }
    }
    return head;
}

void display(struct node *head)
{
    struct node *curr;
    curr = head;
    while(curr->nxt != NULL)
    {
        printf("%d --> ",curr->data);
        curr = curr->nxt;
    }
    printf("%d\n",curr->data);
}

struct node *middle(struct node *head, int n[], int l)
{
    if (l%2 == 0)
    {
        printf("there is no middle element in linked list \nbecause the length of arr is in even\n");
    }
    else
    {
        int mid = l/2;
     
        struct node *curr;
        curr = head;
        while(curr->nxt == mid)
        {
            printf("yeah\n");
        }
    }
    return head;
}

void main()
{
    head = NULL;
    int arr[] = {1,2,3,4,5,6,7};
    int len = sizeof(arr)/sizeof(arr[0]);

    head = insert( head,arr,len);
    display(head);
    printf("\n");
    head = middle(head,arr,len);
}
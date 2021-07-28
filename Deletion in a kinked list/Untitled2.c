#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
};

void traversal(struct node*ptr)
{
    while(ptr!=0)
    {
        printf("element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node* atfirst(struct node* head)
{
    struct node* p=head;
    head=head->next;
    free(p);
    return head;
}
struct node* end(struct node*head)
{
    struct node*p=head;
    struct node*q=head->next;

    while(q->next!=0)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;

}
struct node* atindex(struct node*head,int index)
{
    struct node*p=head;
    int i=0;
    struct node*q=head->next;

    for(i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    free(q);
    return head;

}
int main()
{
    //struct node*head;
    //struct node*second;
    //struct node*third;
    //struct node*four;

    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    struct node *four=(struct node*)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=9;
    third->next=four;

    four->data=10;
    four->next=NULL;

    printf("before deletion: \n");
    traversal(head);
    printf("After deletion: \n");
   // head=atfirst(head);
    //head=end(head);
    head=atindex(head,2);
    traversal(head);

}


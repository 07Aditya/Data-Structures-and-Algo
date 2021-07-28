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
struct node* atfirst(int data,struct node* head)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;

    return ptr;
}
struct node* end(int data,struct node*head)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;

    while(p->next!=0)
    {
        p=p->next;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;

}
struct node* atindex(int data,struct node*head,int index)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    int i=0;

    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
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

    printf("before insertion: \n");
    traversal(head);
    printf("After insertion: \n");
    //head=atfirst(6,head);
    //head=end(11,head);
    head=atindex(12,head,2);
    traversal(head);

}

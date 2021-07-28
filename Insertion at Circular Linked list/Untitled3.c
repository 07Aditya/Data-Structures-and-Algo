#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};

void traversal(struct node*head)
{
    struct node* p= head;

    do{
        printf("element:%d\n",p->data);
        p=p->next;
    }while(p!=head);
}
struct node* insertatbeg(int data,struct node* head)
{
   struct node* ptr=(struct node*)malloc(sizeof(struct node));
   struct node* p=head->next;

   while(p->next!=head)
   {
      p=p->next;
   }
   ptr->data=data;
   ptr->next=p->next;
   p->next=ptr;
   head=ptr;

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
    four->next=head;

    printf("before insertion: \n");
    traversal(head);
    printf("After insertion: \n");
    head=insertatbeg(12,head);
    //head=end(head);
   // head=atindex(head,2);
    traversal(head);

}


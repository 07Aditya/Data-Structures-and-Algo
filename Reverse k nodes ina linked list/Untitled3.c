#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
};
void traversal(struct node*ptr)
{
    //struct node* p= head;

    while(ptr!=NULL)
    {
        printf("element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node* rev(struct node*head,int k)
{
  struct node* prev=NULL;
  struct node* cur=head;
  struct node* agla;
  //struct node* nxt;
   int count=0;
  while(cur!=NULL && count<k)
  {
      agla=cur->next;
      //agla=cur->next;
      cur->next=prev;

      prev=cur;
      cur=agla;
      count++;
  }
  if(agla!=NULL){
  head->next=rev(agla,k);
  }
  return prev;

}
int main()
{
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

    printf("list=\n");
    traversal(head);
    printf("list=\n");
    head=rev(head,2);
    traversal(head);
}

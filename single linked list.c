#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}
int count_of_nodes(struct node *);
{
    int count=0;
    struct node *ptr=*head;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        count++;
    }
    return count;
}
void display(struct node*head)
{
    struct node*t=head;
    while(t!=NULL)
    {
        printf("\n %d",t->data);
        t=t->next;
    }
    printf("\n");
}
void insert_at_beginnning(struct node**head,int d)
{
    if(head==NULL)
    {
        printf("list is empty");
        return;
    }
    struct node*temp=malloc(sizeof(struct node*));
    temp->data=d;
    temp->next=NULL;
    temp->next=*head;
    *head=temp;
}
void insert_at_end(struct node *h,int x)
{
    struct node*temp=malloc(sizeof(struct node*));
    temp->data=x;
    temp->next=NULL;
    struct node *ptr = *head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
}
void insert_at_position(struct node*head,int pos,int x,int size)
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    else if(pos<1||pos>size+1)
    {
        printf("invalid position\n");
    }
    else if(pos==1)
    {
        insert_at_beginning(head,x);
    }
    else if(pos==size+1)
    {
        insert_at_end(head,x);
    }
    else
    {
        struct node*temp=malloc(sizeof(struct node*));
        temp->data=x;
        temp->next=NULL;
        struct node *ptr=head;
        pos--;
        while(pos!=1)
        {
            ptr=ptr->next;
            pos--;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
}
void delete_at_end(struct node*)
{
    struct node *ptr=*head;
    struct node*current;
    while(ptr->next!=NULL)
    {
        current=ptr;
        ptr=ptr->next;
    }
    current->next=NULL;
    free(ptr);
}
void delete_at_beginning(struct node**head)
{
    struct node*ptr=*head;
    (*head)=(*head)->next;
    free(ptr);
}
void delete_at_position(struct node*head,int pos,int size)
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    else if(pos<1||pos>size+1)
    {
        printf("invalid position\n");
    }
    else if(pos==1)
    {
        delete_at_beginning(&head);
    }
    else if(pos==size)
    {
        delete_at_end(head);
    }
    else
    {
        struct node*ptr=head;
        struct node*temp=head;
        while(pos!=1)
        {
            temp=ptr;
            ptr=ptr->next;
            pos--;
        }
        temp->next=ptr->next;
        free(ptr);
    }
}
void printing_of_nodes(struct node*head)
{
    int size;
    display(head);
    size=count_of_nodes(head);
    printf("number of node:%d\n",size);
}
void search(struct node*head,int key)
{
    int count=0;
    struct node*ptr=head;
    while(ptr!=NULL)
    {
        count++;
        if(key==ptr->data)
        {
            printf("key is found at position:%d",count);
            return;
        }
        ptr=ptr->next;
    }
    printf("**key is found at position**\n");
}
int main()
{
    struct node*head;
    head=malloc(sizeof(struct node*));
    head->data=10;
    head->next=NULL;
    insert_at_beginning(&head,50);
    insert_at_position(head,5,60,count_of_nodes(head));
    insert_at_end(head,70);
    delete_at_end(head);
    delete_at_beginning(&head);
    delete_at_position(head,5,count_of_nodes(head));
    printing_of_nodes(head);
    int key;
    printf("enter a element to search:");
    scanf("%d",&key);
    search(head,key);
    return 0;
}


#include<stdio.h>
#include<stdlib.h>
//node creation
struct node{
    int data;
    struct node *addr;
};
struct node *head=NULL,*travel,*temp;
//create function
void create(int num)
{
    struct node *newnode;
    newnode=(struct node*)malloc(1*sizeof(struct node));
    newnode->data=num;
    newnode->addr=NULL;
    if(head==NULL)
    {
        head=newnode;
        travel=newnode;
    }
    else
    {
        travel->addr=newnode;
        travel=newnode;
    }
}
//display
void display()
{
    struct node *itr;
    for(itr=head;itr!=NULL;itr=itr->addr)
        printf("%d ",itr->data);
}
void insert(int num,int pos)
{
    struct node *newnode;
    newnode=(struct node*)malloc(1*sizeof(struct node));
    newnode->data=num;
    if(pos==1)
    {
        newnode->addr=head;
        head=newnode;
    }
    else
    {
        int cnt=1;
        struct node *itr;
        for(itr=head;itr!=NULL;itr=itr->addr)
        {
            cnt++;
            if(cnt==pos)
            {
                temp=itr->addr;
                itr->addr=newnode;
                newnode->addr=temp;
            }
        }
    }
}
//middle element
int middle()
{
    struct node *itr,*x,*y;
    x=head;
    y=head;
    while(y!=NULL && (y->addr)!=NULL)
    {
        x=x->addr;
        y=y->addr->addr;
    }
    return x->data;
}
int main()
{
    create(10);
    create(20);
    create(30);
    create(40);
    create(50);
    display();
    insert(25,3);
    printf("\n");
    display();
    printf("\n%d",middle());
}

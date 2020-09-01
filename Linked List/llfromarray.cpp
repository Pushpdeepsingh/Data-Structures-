#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct node{
    int data;
    node *next;
}*head=NULL;

void create_ll(int n,int A[]){
    //creating the first node
    int i;
    struct node *last;
    struct node *t;
    
    head= (struct node *)malloc(sizeof(struct node)); 
    head->data=A[0];
    head->next=NULL;
    last=head;

    //creation of the next nodes
    for (i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node)); 
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}

void traverse(struct node*l){
    cout<<"the trversed ll is as follows"<<endl;
    while (l!=NULL)
    {
        cout<<l->data<<endl;
        l=l->next;
    }
    
}


int main(){
int A[10]={1,2,3,4,5,6,7,8,9,0};
create_ll(10,A);
traverse(head);
}
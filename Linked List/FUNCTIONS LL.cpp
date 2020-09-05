//1.create singly linked list by insert at front func
//2.traverse and print
//3.sum of nodes func
//4.count nodes func

#include <iostream>
using namespace std;


//node structure and head =null
struct node
{
    int data;
    node *next;
}*head = NULL,*tail=NULL;

//insert-front func
void createLL (int n, int a[]){
    //first node
    struct node* x =new node;
    x->data =a[0];
    x->next =NULL;
    head =x;
    tail =x;

    for(int i=1;i<n;i++){
        struct  node *t=new node;
        t->data =a[i];
        t->next =NULL;
        tail->next=t;
        tail =t;
    }

}

//traverse
void traverse(node *p){
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
}
//count
void countnodes(node *p){
    int o=0;
    while(p!=NULL){
        o++;
        p=p->next;
    }
    cout<<"number of the node is as :"<<o<<endl;
}
//sum of nodes
void sumnodes(node *p){
    int o=0;
    while(p!=NULL){
        o=o+p->data;
        p=p->next;
    }
    cout<<"sum of the nodes is as :"<<o<<endl;
}
void maxxnodes(node *p){
    int o=0;
    while(p!=NULL){
        if(p->data>o)
        {
            o=p->data;
        }
        p=p->next;
    }
    cout<<"maxx of the nodes is as :"<<o<<endl;
}
void search (node*p,int i){
    while (p!=NULL)
    {
        if(p->data==i){
            cout<<"node found at"<<p->next;
            break;
        }
        else
        {
          p=p->next;
        }
        
    }
    
}

//main func
int main(){
    int n=10;
    int a[10]={1,2,3,4,5,6,7,8,9,0};

    createLL(n,a);
    traverse(head);
    countnodes(head);
    sumnodes(head);
    maxxnodes(head);
    search(head,80);
}


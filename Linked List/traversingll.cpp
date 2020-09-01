#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};


void traverse (node*p){
    while (p!=NULL)
    {
        /* code */
        cout<<p->data<<endl;
        p=p->next;
    }
    
}

int main(){
    cout<<"creating a LL with three nodes"<<endl;
    node* head =NULL;
    node* second=NULL;
    node* third =NULL;

    head = new node ();
    second =new node();
    third = new node();
     
    head->data=1;
    head->next = second;
    second->data=2;
    second->next =third;
    third->data=3;
    third->next = NULL;

    cout<<"the traversed nodes are as follows"<<endl;
    traverse(head);
    return 0;
}

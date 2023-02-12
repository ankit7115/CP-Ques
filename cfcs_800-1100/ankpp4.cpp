#include<bits/stdc++.h>

using namespace std;

struct Node_list{
    int info;
    struct Node_list *next;
};

typedef struct Node_list node;

node *start=NULL;

node *getNode(){
    node *newnode;
    newnode=(node *)malloc(sizeof(node));
    cout<<"Enter the data for node ";
    cin>>newnode->info;
    newnode->next=NULL;
    return newnode;
}

void create_list(int n){
    node *newnode;
    node *temp;

    for(int i=0;i<n;i++){
        newnode=getNode();
        if(start==NULL){
            start=newnode;
        }
        else{
            temp=start;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }

}


void insert_begin(int x){
    node *newnode;
    newnode=(node *)malloc(sizeof(node));
    newnode->info=x;
    cout<<"Value inserted in begining \n";
    newnode->next=start;
    start=newnode;
}
void insert_last(int x){
    node *newnode;
    node *temp;
    newnode=(node *)malloc(sizeof(node));
    newnode->info=x;
    cout<<"Value inserted in last \n";
    temp=start;
    while(temp->next!=NULL){
        temp=temp->next;
    }
      temp->next=newnode;
}
void insert_mid(int x,int pos){
    node *newnode;
    node *temp;
    int count=0;
    newnode=(node *)malloc(sizeof(node));
    newnode->info=x;
    cout<<"Value inserted in mid "<<pos<<"\n";
    temp=start;
    while(temp->next!=NULL){
        count++;
        if(count==pos){
         newnode->next=temp->next;
         temp->next=newnode;
         break;
        }
        temp=temp->next;
    }
     
}

void delete_begin(){
    node *temp;
    if(start==NULL){
        cout<<"no link list exist\n";
        return;
    }
    temp=start;
    start=temp->next;
    cout<<"deleted successfull\n";
}
void delete_end(){
    node *temp;
    node *p=NULL;
    if(start==NULL){
        cout<<"no link list exist\n";
        return;
    }
    temp=start;
    while(temp->next!=NULL){
        p=temp;
        temp=temp->next;  
    }
    p->next=NULL;
}

void delete_mid(int pos){
    node *temp;
    int count=0;
    
    temp=start;
    node *p=NULL;
    while(temp->next!=NULL){
        count++;
        if(count==pos+1){
            p->next=temp->next;
            break;
        }
        p=temp;
        temp=temp->next;
    }

}


int main(){
    // int n;
    // cin>>n;
    //create_list(n);
    insert_begin(100);
    insert_begin(20);
    insert_begin(30);
    insert_begin(50);
    insert_begin(60);
    insert_begin(11);

    insert_last(40);
    insert_last(30);
    insert_last(50);
    insert_last(10);
    insert_last(22);

    insert_mid(25,4);
    node *temp;
    temp=start;
    while(temp!=NULL){
        cout<<temp->info<<" ";
        temp=temp->next;
    }
    cout<<endl;
    // delete_begin();
    // delete_begin();
    // delete_begin();
    
    // delete_end();
    // delete_end();
    delete_mid(4);
    //node *temp;
    temp=start;
    while(temp!=NULL){
        cout<<temp->info<<" ";
        temp=temp->next;
    }
     cout<<endl;
    delete_mid(4);
    //node *temp;
    temp=start;
    while(temp!=NULL){
        cout<<temp->info<<" ";
        temp=temp->next;
    }
     cout<<endl;
    delete_mid(4);
    //node *temp;
    temp=start;
    while(temp!=NULL){
        cout<<temp->info<<" ";
        temp=temp->next;
    }
    
}
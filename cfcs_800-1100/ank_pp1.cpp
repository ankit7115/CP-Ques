#include<iostream>
#define SIZE 50
using namespace std;

struct CQUEUE{
    int front;
    int rear;
    int n;
    int arr[SIZE];
};

void create(struct CQUEUE *cq);
void insert(struct CQUEUE *cq);
void deleting(struct CQUEUE *cq);
void print(struct CQUEUE *cq);

int main(){
    struct CQUEUE q;
    q.front=-1;
    q.rear=-1;
    q.n=0;
    int ch;
    while(true){
        cout<<"Menu\n1.Create\n2.Insert\n3.Delete\n4.Print\n5.Exit\n";
        cout<<"Enter your choice : ";
        cin>>ch;

        switch(ch){
            case 1:create(&q);
                    break;
            case 2:insert(&q);
                   break;
            case 3: deleting(&q);
                    break;
            case 4: print(&q);
                    break;
            case 5:exit(0);

            default: cout<<"Invalid input \n";

        }

    }
}

void create(struct CQUEUE *cq){
    cout<<"Enter the size of the queue\n";
    cin>>cq->n;
}
void insert(struct CQUEUE *cq){
    if(cq->n==0){
        cout<<"queue is not created\n";
        return;
    }
    if(cq->front==0 and cq->rear==(cq->n)-1){
        cout<<"queue is full\n";
        return ;
    }
    if(cq->front==-1){
        cq->front=0;
        cq->rear=0;
    }
    else{
        if(cq->rear==cq->n-1 and cq->front !=0){
            cq->rear=0;
        }
        else{
            cq->rear=cq->rear+1;
        }
    }
        // cq->rear=(cq->rear+1)%(cq->n);
    cout<<"Enter the element to insert : ";
    cin>>cq->arr[cq->rear];
}
void deleting(struct CQUEUE *cq){
     if(cq->n==0){
        cout<<"queue is not created\n";
        return;
    }
    if(cq->front==-1){
        cout<<"Queueu is Empty\n";
        return;
    }
    int x=cq->arr[cq->front];
    if(cq->front==cq->rear){
        cq->front=-1;
        cq->rear=-1;
    }
    else{
        if(cq->front==cq->n-1){
            cq->front=0;
        }
        else{
            cq->front=cq->front+1;
        }
        // cq->front=(cq->front+1)%cq->n;
    }
    cout<<"The "<<x<<" is deleted sucessfully\n";
}
void print(struct CQUEUE *cq){
     if(cq->n==0){
        cout<<"queue is not created\n";
        return;
    }
    if(cq->front==-1){
        cout<<"Queue is Empty\n";
        return;
    }
    else {
        int i = cq->front;
        while(i != cq->rear) {
            cout<<cq->arr[i]<<" ";
            i = (i+1)%cq->n;
        }
        cout<<cq->arr[cq->rear];
    }
}
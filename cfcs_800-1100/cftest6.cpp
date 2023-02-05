#include<bits/stdc++.h>
//#define n 5
using namespace std;

struct Stack{
    
    int *arr;
    int n;
    int top;
};

void create(struct Stack *s);
void push(struct Stack *s,int x);
int  pop(struct Stack *s);
void print(struct Stack *s);

int main(){
    struct Stack st;
    st.n=0;
    st.top=-1;
    int ch;
    int x;
    int click=0;
    while(true){
        if(click==0){
        cout<<"menu\n1.create(dynamically allocate) \n2.push\n3.pop\n4.print\n5.exit the program \nEnter your choice ";
        cin>>ch;
        
          switch(ch){
            case 1: click=1;
                    create(&st);
                    break;
            case 2: cout<<"Enter a number to be pushed ";
                    cin>>x;
                    push(&st,x);
                    break;
            case 3:x=pop(&st);
                    if(x!=INT_MAX)
                    cout<<"\n"<<x<<" is popped sucessfully\n";
                    break;
            case 4:print(&st);
                    break;
            case 5:exit(0);
            
            default:cout<<"\nenter a valid number\n";
        }
        }
        if(click==1){
            cout<<"menu\n1.push\n2.pop\n3.print\n4.Deallocate the memory that is allocated\n5.exit the program \nEnter your choice ";
            cin>>ch;
        
              switch(ch){
            case 1: cout<<"Enter a number to be pushed ";
                    cin>>x;
                    push(&st,x);
                    break;
            case 2:x=pop(&st);
                    if(x==INT_MAX){
                    break;
                    }
                    cout<<"\n"<<x<<" is popped sucessfully\n";
                    break;
            case 3:print(&st);
                    break;
            case 4:delete[] st.arr;
                    break;
            case 5:exit(0);
            
            default:cout<<"\nenter a valid number\n";
        }
        }
    }

}
void create(struct Stack *s){
    cout<<"Enter the size of stack : ";
    cin>>s->n;
    s->arr=new int[s->n];
    cout<<"The stack is sucessfully created \n";
}
void push(struct Stack *s,int x){
    if(s->n==0){
        cout<<"Stack is not created \n";
        return ;
    }
    
    if(s->top==s->n-1){
        cout<<"Stack is full\n";
        return  ;
    }
    s->top++;
    s->arr[s->top]=x;
    cout<<endl<<x<<" is pushed sucessfully\n";  
}
int pop(struct Stack *s){
    int x;
    if(s->n==0){
        cout<<"Stack is not created \n";
        return INT_MAX;
    }
     if(s->top==-1){
        cout<<"Stack is empty\n";
        return  INT_MAX;
    }
    
    x= s->arr[s->top];
    s->top--;
    //cout<<endl<<x<<" is popped sucessfully\n"; 
    return x;
}
void print(struct Stack *s){
    if(s->n==0){
        cout<<"Stack is not created \n";
        return ;
    }
     if(s->top==-1){
        cout<<"Stack is empty\n";
        return  ;
    }
    for(int i=0;i<=s->top;i++){
        cout<<s->arr[i]<<" ";
    }
    cout<<endl;
}




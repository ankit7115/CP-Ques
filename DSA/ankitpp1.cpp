#include<bits/stdc++.h>
#define SIZE 5
using namespace std;

class Stack{
    private:
    int arr[SIZE];
    int top;
    
    
    public:
    Stack(){
        top=-1;
    }

    void push(int );
    int pop();
    void print();
    void peek();
};

void Stack::push(int x){
    if(top==SIZE-1){
        cout<<"Stack is full\n";
        return;
    }
    else{
    arr[++top]=x;
    cout<<x<<" is inserted sucessfully \n";
    }
}
int Stack::pop(){
    int x;
    if(top==-1){
        cout<<"Stack is Empty\n";
        return INT_MIN;
    }
    x=arr[top];
    --top;
    return x;
}
void Stack::print(){
    if(top==-1){
        cout<<"Stack is Empty\n";
        return;
    }
    for(int i=0;i<top;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Stack::peek(){
    if(top==-1){
        cout<<"Stack is Empty\n";
        return;
    }
    cout<<arr[top]<<endl;
}
int main(){
    Stack s;
    string str;
    cout<<"Enter a infix expression :";
    cin>>str;

    str+=')';
    

    // int ch;
    // int c;
    // while(true){
    //     cout<<"1.Push\n2.Pop\n3.print\n4.Peek\n5.exit\n";
    //     cout<<"Enter your choice: ";
    //     cin>>ch;

    //     switch(ch){
    //         case 1:cout<<"Enter a number: ";
    //                 cin>>c;
    //                 s.push(c);
    //                 break;
    //         case 2:c=s.pop();
    //                 if(c==INT_MIN){
    //                     break;
    //                 }
    //                 cout<<c<<" is popped sucessfully\n";
    //                 break;
    //         case 3:s.print();
    //                 break;
    //         case 4:s.peek();
    //                 break;
    //         case 5:exit(0);
    //         default:cout<<"Enter a valid choice \n";
    //     }
    // }
    
}
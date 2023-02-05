/*WriteaprograminC++todefineanoverloadedfunctions“plusoverloaded”that returns result depending on the type of inputs
i. if two floats are passed, then addition operation to be performed on inputs.
ii. if two strings are passed, then concatenation of two strings is performed.
iii. if an integer array, its size and an integer is passed then the given integer is added to all the elements of the array.
iv. If two integer arrays are passed, the both the arrays are merged by eliminating duplicate entries.
*/
#include<bits/stdc++.h>
#define size 10
using namespace std;

class Hello{
    private:
    float a,b;
    string s1,s2;
    int arr[size];
    int n;
    int brr[size];
    
    public:

    // Hello(float ,float){
    //     cin>>a;
    //     cin>>b;
    // }

    // Hello(string ,string){
    //     cin>>s1;
    //     cin>>s2; 
    // }

    // void show_data(){
    //     cout<<a;
    //     cout<<" "<<b;
    // }
    float plusoverloaded(float x,float y);
    string plusoverloaded(string s,string str);
    int plusoverloaded(int *a,int n);
    int* plusoverloaded(int *a,int ,int *b,int );
};

float Hello::plusoverloaded(float x,float y){
    return x+y;
}
string Hello::plusoverloaded(string x,string y){
    return x+y;
}
int Hello::plusoverloaded(int* x,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=*(x+i);
    }
    return sum;
}
int* Hello::plusoverloaded(int *a,int size_a,int *b,int size_b){
    int crr[size_a+size_b];
    
}

int main(){
     Hello h1;
    // h1.show_data();
    float x=5.5 , y=0.444;
    cout<<h1.plusoverloaded(x,y)<<endl;
    string s="hello",s1="World";
    cout<<h1.plusoverloaded(s,s1)<<endl;
    int arr[]={5,4,2,4,5};
    int brr[]={4,3,2,4,5};
    cout<<h1.plusoverloaded(arr,5);
    int *t=h1.plusoverloaded(arr,5,brr,5);

    return 0;
}
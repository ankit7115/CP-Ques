#include<bits/stdc++.h>

using namespace std;

struct Product{
    string productId;
    float rating;
};

void input(struct Product *temp){
   cout<<"Input ProductId and rating for product ";
    cin>>temp->productId;
    cin>>temp->rating;
}

void toprated(struct Product *temp){
    if(temp->rating>=4.0){
        
        cout<<temp->productId<<" "<<temp->rating<<endl;
    }
}
void avgrated(struct Product *temp){
    if(temp->rating<4.0 and temp->rating>=3.0){
        
        cout<<temp->productId<<" "<<temp->rating<<endl;
    }
}
void lowrated(struct Product *temp){
    if(temp->rating<3.0){
        cout<<temp->productId<<" "<<temp->rating<<endl;
    }
}

int main(){

    int size;
    cout<<"Enter the No. of product\n";
    cin>>size;
    struct Product p[size];
    for(int i=0;i<size;i++){
        input(&p[i]);
    }
    cout<<"Top rated product : \n";
    for(int i=0;i<size;i++){
        toprated(&p[i]);
    }
     cout<<"Average rated product : \n";
    for(int i=0;i<size;i++){
        avgrated(&p[i]);
    }
    cout<<"Low rated product : \n";
    for(int i=0;i<size;i++){
        lowrated(&p[i]);
    }

}
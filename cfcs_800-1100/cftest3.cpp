
#include<bits/stdc++.h>

using namespace std;

struct student{
     struct name{
        string f,l;
    }nm;
    
     struct DOB{
        int dd;
        int mm;
        int yy;
    }db;
    int regno;
    struct Add{
        string plot_no;
        int area_code;
        string city;
        
    }ad;
    int marks;
};


void insert_data(struct student *st){
    
    cout<<"Enter the first name of student";
    cin>>st->nm.f;
    cout<<"Enter the second name of student";
    cin>>st->nm.l;
    cout<<"Enter the roll no. of student";
    cin>>st->regno;
    cout<<"Enter the date of dirth in dd mm yy format of student";
    cin>>st->db.dd;
    cin>>st->db.mm;
    cin>>st->db.yy; 
    cout<<"Enter the address in plot_no<space>area_code<space>city name  of student";
    cin>>st->ad.plot_no;
    cin>>st->ad.area_code;
    cin>>st->ad.city;
    cout<<"Enter the total marks of student";
    cin>>st->marks;
    
}

void print(struct student *st){
    cout<<st->nm.f<<endl;
    cout<<st->nm.l<<endl;
    cout<<st->regno<<endl;
    cout<<st->db.dd<<endl;
    cout<<st->db.mm<<endl;
    cout<<st->db.yy<<endl;
    cout<<st->ad.plot_no<<endl;
    cout<<st->ad.area_code<<endl;
    cout<<st->ad.city<<endl;
    cout<<st->marks;
}
int main(){
    struct student std1[2];
    for(int i=0;i<2;i++){
        insert_data(&std1[i]);
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2-i-1;j++){
            if(std1[j].regno>std1[j+1].regno){
                struct student temp=std1[j];
                std1[j]=std1[j+1];
                std1[j+1]=temp;
            }
        }
    }
    
    for(int i=0;i<2;i++){
        print(&std1[i]);
   
    }
    return 0;
}
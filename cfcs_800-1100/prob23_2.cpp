#include<bits/stdc++.h>

using namespace std;

#define SIZE 7

struct product{
	string prod_id;
	string prod_name;

	float cur_disp;
	float pro_labp;
	int user_rating;

};

void input_data(struct product *k);
void print_data(struct product *k);
void salesprice(struct product *k);

int main(){
	struct product item[SIZE];
	for(int i=0;i<SIZE;i++){
		cout<<"item "<<i+1<<"::"<<endl;
		input_data(&item[i]);
	}
	for(int i=0;i<SIZE;i++){
		cout<<"item "<<i+1<<"::"<<endl;
		print_data(&item[i]);
	}
	return 0;
}

void input_data(struct product *k){
	cout<<"Enter the product ID : ";
	cin>>k->prod_id;

	cout<<"Enter Product Name : ";
	cin>>k->prod_name;
	

	cout<<"Enter The current discounted price  : ";
	cin>>k->cur_disp;
	cout<<"Enter the product label price : ";
	cin>>k->pro_labp;
	
	cout<<" Enter rating (no. of star out of 5) : ";
	cin>>k->user_rating;

}

void print_data(struct product *k){
	cout<<" Product Name : ";
	cout<<k->prod_name<<endl;
	cout<<" product ID : ";
	cout<<k->prod_id<<endl;
	cout<<" The current Discounted price :  ";
   cout<<k->cur_disp<<endl;
	cout<<" The product label price  : ";
   cout<<k->pro_labp<<endl;
   
	cout<<" Rating : ";
	if(k->user_rating<=0 || k->user_rating>5){
		k->user_rating=5;
	}
	for(int i=0;i<k->user_rating;i++){
		cout<<'*'<<" ";
	}
	cout<<endl;
	
	cout<<"The sales price of item : ";
	salesprice(k);
}

void salesprice(struct product *k){
	float ans;
	float dis_rate=(k->cur_disp/100)*k->pro_labp;
	float sgst=(k->pro_labp)*0.09;
	float cgst=(k->pro_labp)*0.09;
		ans=(k->pro_labp)-dis_rate+cgst+sgst;
		cout<<" "<<ans<<endl;
	
}
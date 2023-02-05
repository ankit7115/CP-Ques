#include<bits/stdc++.h>

using namespace std;

#define SIZE 2

struct KYC{
	string name;
	struct DOB{
		int dd;
		int mm;
		int yy;
	}db;
	string pan_no;
	string adhar_no;
	struct Add{
		int pin_code;
		string city;
		string state_code;
	}ad;
	float annual_income;
	float sut;
};

void input_data(struct KYC *k);
void print_data(struct KYC *k);
void computeIncomeTax(struct KYC *k);

int main(){
	struct KYC person[SIZE];
	for(int i=0;i<SIZE;i++){
		cout<<"Person "<<i+1<<"::"<<endl;
		input_data(&person[i]);
	}
	for(int i=0;i<SIZE;i++){
		cout<<"Person "<<i+1<<"::"<<endl;
		print_data(&person[i]);
	}
	return 0;
}

void input_data(struct KYC *k){
	cout<<"Enter Name : ";
	cin>>k->name;
	cout<<"Enter DOB in dd mm yy format : ";
	cin>>k->db.dd>>k->db.mm>>k->db.yy;
	cout<<"Enter the Pan no. : ";
	cin>>k->pan_no;
	cout<<"Enter The Adhar no. : ";
	cin>>k->adhar_no;
	cout<<"Enter Your Address pin_code city state(short form) : ";
	cin>>k->ad.pin_code;
	cin>>k->ad.city>>k->ad.state_code;
	cout<<"Enter the Annual income (in lakh) : ";
	cin>>k->annual_income;
	cout<<" Enter saving under tax scheme (in thousand) : ";
	cin>>k->sut;
		if(k->sut>=1500){
		k->sut=1500;
	}
}

void print_data(struct KYC *k){
	cout<<" Name : ";
	cout<<k->name<<endl;
	cout<<" DOB : ";
	cout<<k->db.dd<<" "<<k->db.mm<<" "<<k->db.yy<<endl;
	cout<<" Pan no. : ";
   cout<<k->pan_no<<endl;
	cout<<" Adhar no. : ";
   cout<<k->adhar_no<<endl;
	cout<<" Address pin_code city state(short form) : ";
	cout<<k->ad.pin_code<<" "<<k->ad.city<<" "<< k->ad.state_code<<endl;
	cout<<" Annual income : ";
	cout<<k->annual_income<<endl;
	cout<<" saving under tax scheme : ";
	cout<<k->sut<<endl;
	cout<<"Your Income tax is : ";
	computeIncomeTax(k);
}

void computeIncomeTax(struct KYC *k){
	float ans;
	ans=(k->annual_income*100000)-(k->sut*1000);
	if(ans<=5){
		cout<<"NO Tax "<<endl;
	}
	else if(ans>5 && ans<=10){
		cout<<" "<<ans*(0.1)<<endl;
	}
	else{
		cout<<" "<<ans*(0.2)<<endl;
	}
}
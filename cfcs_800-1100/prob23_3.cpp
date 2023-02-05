#include<bits/stdc++.h>
#define ROW 3
#define COL 3
using namespace std;

int main(){
	int **A;
	A=new int*[ROW];
	for(int i=0;i<ROW;i++){
		A[i]=new int[COL];
		for(int j=0;j<COL;j++){
			cin>>A[i][j];
		}
	}
	
	int **B;
	B=new int*[ROW];
	for(int i=0;i<ROW;i++){
		B[i]=new int[COL];
		for(int j=0;j<COL;j++){
			cin>>B[i][j];
		}
	}
	int **mul;
	mul=new int*[ROW];
	
	for(int i=0;i<ROW;i++){
		mul[i]=new int[COL];
		for(int j=0;j<COL;j++){
			mul[i][j]=0;
			for(int k=0;k<COL;k++){
				mul[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	
		for(int i=0;i<ROW;i++){
		for(int j=0;j<COL;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
		for(int i=0;i<ROW;i++){
		for(int j=0;j<COL;j++){
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=0;i<ROW;i++){
		for(int j=0;j<COL;j++){
			cout<<mul[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	
	for(int i=0;i<ROW;i++){
		delete[] A[ROW];
	}
	delete[] A;
		
	for(int i=0;i<ROW;i++){
		delete[] B[ROW];
	}
	delete[] B;
		
	for(int i=0;i<ROW;i++){
		delete[] mul[ROW];
	}
	delete[] mul;
}

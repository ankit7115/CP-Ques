#include<bits/stdc++.h>

using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>arr;
	    int x;
	    int l1=n;
        int l2=n+1;
	    
	    for(int i=0;i<2*n;i++){
            cin>>x;
	    arr.push_back(x);
        }
	    vector<int> pos;
	    
	    for(int i=0;i<2*n;i++)
	    {
	        if(i<n){
	            if(arr[i]>n)
	            pos.push_back(l1-i-1);
	        }
	        else{
	            if(arr[i]<=n)
	            pos.push_back(i+1-l2);
	        }
	    }
	    
	    long long res=0;
	    for(int i=0;i<pos.size();i++){
	        res=res+pos[i];
	    }
	   
	    
	    res=res+(pos.size()/2);
	    
	    
	    cout<<res<<endl;
	}
}
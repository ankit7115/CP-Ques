#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr;
	    vector<int> brr;
	    
    int x;
    int index;
	    for(int i=0;i<n;i++){
	        cin>>x;
	        arr.push_back(x);
	    }
	     for(int i=0;i<n;i++){
	        cin>>x;
	        brr.push_back(x);
	    }
        int maxLike=INT_MIN;
        int maxComment=INT_MIN;
        for(int i=0;i<n;i++){ 
            if(maxLike<arr[i]){
            maxLike=max(maxLike,arr[i]);
            maxComment=brr[i];
            index=i;
        }
    if(maxLike==arr[i]){
        if(brr[i]>maxComment){
            maxLike=max(maxLike,arr[i]);
            maxComment=brr[i];
            index=i;
         }
         }
    }
    cout<<index+1<<endl;
    }

}

#include<bits/stdc++.h>
using namespace std;
int decToBinary(int n)
{
    
    int binaryNum[32];
 
   
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    
    return i;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,y;
	    cin>>n>>y;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
        int count=decToBinary(y);
	    int st=1;
	    for(int i=0;i<n;i++){
	        st=(st|arr[i]);
	    }
        int cc=log2(st+1);
        
	}
	return 0;
}
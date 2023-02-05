#include<bits/stdc++.h>
using namespace std;
#define long long int
#define all(x) (x).begin(), (x).end()
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;

while(t--){
    int n,f=0;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        for(int j=i+1;j<=sqrt(n);j++){
         for(int k=j+1;k<=sqrt(n);k++){
            if(i*j*k==n && (n%(i*j))==0 && (n%(j*k))==0 && (n%(i*k))==0){
                    cout<<i<<" "<<j<<" "<<k<<"\n";
                    f=1;
                   
                    break;
                }
            }
            if(f==1){
                break;
            }
        }
        if(f==1)
        break;
    }
    if(f==1){
        continue;
    }
    cout<<-1;
    cout<<"\n";
}
	return 0;
}
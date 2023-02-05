#include<bits/stdc++.h>
using namespace std;


#define all(x) (x).begin(), (x).end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
      long long a,b,c,d;
      cin>>a>>b>>c>>d;
      long long l,f;
       l=a*d;
       f=c*b;
       if(l==f){
        cout<<0<<"\n";
        continue;
       }
       if(l==0 || f==0){
        cout<<1;
       }
       else if(l%f==0 || f%l==0){
        cout<<1;
       }
       else{
        cout<<2;
       }
       cout<<"\n";
    }   
     return 0;
}
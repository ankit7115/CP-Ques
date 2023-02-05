#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    vector<int> a(n,1);
    vector<pair<int,int>> p;
    int sum1=1,sum2=0;
    for(int i=2,j=3;i<10000000,j<1000000;i=i+2,j=j+2){
        p.push_back(make_pair(i,j));
    }
    for(auto it:p){
        sum2+=p.first;
        if(sum1+sum2>=n){
            break;
        }
        sum2+=p.second;
        if(sum1+sum2>=n){
            break;
        }
        sum2+=p.first;
        if(sum1+sum2>=n){
            break;
        }
        sum2+=p.second;
        if(sum1+sum2>=n){
            break;
        }
    }
    
    for(int i=1;i<n;i++){
        
        
    }
    // while((sum1+sum2<n)){
    //     sum2+=k1+k2;
    //     sum1+=l1+l2;
    //     k1=l2+1;
    //     k2=k1+1;
    //     l1=k2+1;
    //     l2=l1+1;
    // }
    cout<<sum1<<" "<<sum2<<"\n";
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
    solve();
    }
    return 0;
}
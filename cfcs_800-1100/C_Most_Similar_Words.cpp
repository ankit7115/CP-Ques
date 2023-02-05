#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n,m;
    cin>>n>>m;
    string s1,s;
    vector<int> ans;
    int sum=0;
    vector<string> vec;
    for(int i=0;i<n;i++){
        cin>>s1;
        vec.push_back(s1);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            sum=0;
        for(int k=0;k<m;k++){
            sum+=abs(vec[i][k]-vec[j][k]);
        }
        ans.push_back(sum);
            
        }
        
        
    }
    cout<<*min_element(all(ans))<<endl;
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
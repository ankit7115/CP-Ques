#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    vector<int>a;
    vector<int>b;
    vector<int>c;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
        cin>>x;
        b.push_back(x);
        cin>>x;
        c.push_back(x);
    }
    //int s1=accumulate(all(a),0);
    if(accumulate(all(a),0)==0 and accumulate(all(b),0)==0 and accumulate(all(c),0)==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t;
    // cin>>t;

    // while(t--){
    solve();
    //}
    return 0;
}
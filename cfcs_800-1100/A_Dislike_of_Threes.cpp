#include<bits/stdc++.h>
using namespace std;
#define long long int
#define all(x) (x).begin(), (x).end()
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int test;
    cin>>test;
    vector<int> ans;
    for(int i=1;i<=2000;i++){
        if(i%3==0 || i%10==3){
            continue;
        }
        ans.push_back(i);
    }

    while(test--){
        int n;
        cin>>n;
        cout<<ans[n-1]<<"\n";

    }
    return 0;
}
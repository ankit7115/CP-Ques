#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<int> a1,a2,a3;
    int x;

    map<int ,int> freq1,freq2,freq3;
    vector<int> ans;
    for(int i=0;i<n;i++){
        cin>>x;
        a1.push_back(x);
        freq1[x]++;
        freq2[x]++;
    }
    for(int i=0;i<n-1;i++){
        cin>>x;
        a2.push_back(x);
        freq1[x]++;
    }
    sort(all(a1));
    sort(all(a2));
    for(int i=0;i<freq1.size();i++){
        if(freq2[a1[i]]+1!=freq1[a2[i]]){
            ans.push_back(freq1[a1[i]]);
        }
    }
    
    for(int i=0;i<n-2;i++){
        cin>>x;
        a3.push_back(x);
        freq3[x]++;
    }

    for(auto it:ans){
        cout<<it<<" ";
    }
    // long long ans1,ans2;
    // ans1=accumulate(all(a1),0l)-accumulate(all(a2),0l);
    // ans2=accumulate(all(a2),0l)-accumulate(all(a3),0l);
    // cout<<ans1<<"\n"<<ans2;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int>arr,ans;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }

        int mov=0;
        int mn=*min_element(all(arr));
        int mx=*max_element(all(arr));

        

    }
    return 0;
}   
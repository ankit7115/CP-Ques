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
    vector<string> vec;
    while(t--){
        string s;
        cin>>s;
        auto it=find(all(vec),s);
        if(it!=vec.end()){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        vec.push_back(s);
        cout<<endl;
    }
    return 0;
}
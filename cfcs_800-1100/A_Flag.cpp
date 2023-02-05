#include<bits/stdc++.h>
using namespace std;

#define long long int
#define all(x) (x).begin(), (x).end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<string> s;
    int f=0;
    char c;
    for(int i=0;i<n;i++){
        string t;
        cin>>t;
        c=t[0];
        for(int j=1;j<m;j++){
            if(t[j]!=c){
                f=1;
                break;
            }
        }
        // if(f==1){
        //     break;
        // }
        
        s.push_back(t);
    }

    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}
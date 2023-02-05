#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin>>n>>m;
    int i=n,j=m;
    if(n>m){
    for(int k=0;k<n+m;k++){
        if(i>0){
            cout<<"B";
            i--;
        }
        if(j>0){
            cout<<"G";
            j--;
        }

    }
    }
    else{
        for(int k=0;k<n+m;k++){
        if(j>0){
            cout<<"G";
            j--;
        }
        if(i>0){
            cout<<"B";
            i--;
        }

    }
    }

    return 0;
}
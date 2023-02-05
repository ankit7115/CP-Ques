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
    string s1="I love";
    string s2="I hate";
    for(int i=1;i<=n;i++){
        if(i!=1){
            cout<<" that ";
        }
        if(i%2!=0){
            cout<<s2;
        }
        else{
            cout<<s1;
        }
    }
    cout<<" it";
    return 0;
}
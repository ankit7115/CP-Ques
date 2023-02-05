#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c;
    cin>>a>>b>>c;
    if(a<1 || b<2 || c<4){
        cout<<0;
        exit(0);
    }
    int min;
    min=a/1;
    int temp=b/2;
    if(min>temp){
        min=temp;
    }
    temp=c/4;
    if(min>temp){
        min=temp;
    }
    cout<<7*min;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define long long int
#define all(x) (x).begin(), (x).end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    string s;
    cin>>s;

    if(s[0]>=65 && s[0]<=90){
        cout<<s;
    }
    else{
        s[0]=s[0]-97+65;
        cout<<s;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define long long int
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

        string s;
        cin>>s;
        int score=0;
        char tt;
        for(int i=0;i<s.size();i++){
            tt=s[i];
            score+=2;
            for(int j=i+1;j<s.size();j++){
                if(s[j]==tt){
                    score++;
                    s.erase(s.begin()+j);
                    j--;
                }
            }
        }
        cout<<score<<"\n";
    }
    return 0;
}
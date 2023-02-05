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
        string s;
        cin>>s;
        char ch;
        if(s[s.size()-1]=='a' && s[0]=='a'){
            s.erase(s.begin()+0);
            s.erase(s.begin()+s.size()-1);
            cout<<"a"<<" "<<s<<" "<<"a";
        }
        else if(s[s.size()-1]=='b' && s[0]=='b'){
            s.erase(s.begin()+0);
            s.erase(s.begin()+s.size()-1);
            cout<<"b"<<" "<<s<<" "<<"b";
        }
        else if( s[0]=='a' && s[s.size()-1]=='b' ){
            // ch=s[s.size()-2];
            // s.erase(s.begin()+s.size()-2);
            // s.erase(s.begin()+s.size()-1);
            for(int i=0;i<s.size()-2;i++)
             cout<<s[i];

            cout<<" "<<s[s.size()-2]<<" "<<s[s.size()-1];
        }
        else{
            // ch=s[1];
            // s.erase(s.begin()+0);
            // s.erase(s.begin()+1);
            
            cout<<s[0]<<" "<<s[1]<<" ";

            for(int i=2;i<s.size();i++)
            cout<<s[i];
        }
        cout<<"\n";
    }
    return 0;
}
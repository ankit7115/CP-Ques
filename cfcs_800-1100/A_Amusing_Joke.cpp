#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1,s2,fn;
    cin>>s1>>s2>>fn;

    s1=s1+s2;
    //cout<<s1<<"\n";
    int found=0;
    if(s1.size()!=fn.size()){
          cout<<"NO";
    }
    else{
        for(int i=0;i<s1.size();i++){
            for(int j=0;j<fn.size();j++){
                if(s1[i]==fn[j]){
                    found=1;
                    fn.erase(fn.begin()+j);
                    break;
                }
             found=0;   
    
            }
            if(found==0){
                cout<<"NO";
                break;
            }
        }
        if(found==1){
            cout<<"YES";
        }
    }
    return 0;
}   
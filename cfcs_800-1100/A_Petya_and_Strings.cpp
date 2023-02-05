#include<bits/stdc++.h>
using namespace std;
#define long long int
#define all(x) (x).begin(), (x).end()
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    string st;
    string sp;
    cin>>st>>sp;
    vector<int> sum1;
    vector<int> sum2;
    int s1,s2;
    for(int i=0;i<st.size();i++){
        if(st[i]>=65 && st[i]<=90){
            s1=st[i]-65;
            sum1.push_back(s1);
        }
        else{
            s1=st[i]-97;
            sum1.push_back(s1);
        }
        if(sp[i]>=65 && sp[i]<=90){
            s2=sp[i]-65;
            sum2.push_back(s2);
        }
        else{
            s2=sp[i]-97;
            sum2.push_back(s2);
        }
    }
    int flag=0;
    for(int i=0;i<sum1.size();i++){
        if(sum1[i]<sum2[i]){
            flag=-1;
            break;
        }
        else if(sum1[i]>sum2[i]){
             flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<0;
    }
    else if(flag==-1){
        cout<<-1;
    }
    else{
        cout<<1;
    }
    return 0;
}
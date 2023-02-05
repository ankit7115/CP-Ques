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
    vector<pair<string,string>> vec;
    while(t--){
        
        pair<string,string> p;
        string s1,s2;
        cin>>s1>>s2;
        p=make_pair(s1,s2);
        vec.push_back(p);
    }
    string s1,s2,t1,t2;
    int found=0;
    int temp;
    vector<pair<string,string>>ans;
    pair<string,string> pp;
   for(int i=vec.size()-1;i>=0;i--){
        s1=vec[i].first;
        found=0;
        
        for(int j=vec.size()-1;j>=0;j--){
            //temp++;
            if(s1==vec[j].second){
               found=1;
               t1=vec[i].second;
               s1=vec[j].first;
               t2=vec[j].first;
              vec.erase(vec.begin()+i-1); 
               j=vec.size()-1;
            }
        }
        if(found==0){
            pp=make_pair(vec[i].first,vec[i].second);
            ans.push_back(pp);

        }
        else{
         pp=make_pair(t2,t1);
            ans.push_back(pp);
    
             
              
        }
        
        }
   
     cout<<ans.size()<<"\n";
        for(auto &it:ans){
            cout<<it.first<<" "<<it.second<<"\n";
        }
    return 0;
}
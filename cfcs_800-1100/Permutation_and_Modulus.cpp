#include<bits/stdc++.h>
#define ll long long;
#define all(x) (x).begin(),(x).end()

using namespace std;

void you_can_definitely_do(){
    int n;
    cin>>n;
    vector<int>even,odd;
    for(int i=2;i<=n;i++){
        if(i%2!=0){
            odd.push_back(i);
        }
        else{
            even.push_back(i);
        }
    }
    odd.push_back(1);
    int k=0,l=0;
    //cout<<k<<" "<<l<<" "<<endl;
    if(n==2){
        cout<<2<<" "<<1<<endl;
        return;
    }
    
        while(k!=even.size() or l!=odd.size()){
            if(k<even.size()){
            cout<<even[k]<<" ";
            k++;
            }
            if(l<odd.size()){
            cout<<odd[l]<<" ";
            l++;
            }
            
        }
    
   
    
    cout<<"\n";
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--){
        you_can_definitely_do();
    }
}
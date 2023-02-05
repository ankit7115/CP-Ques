#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    int arr[n];
    vector<int> ce,co;
    // int ce=0,co=0,in;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    
    }
    //     if(arr[i]%2==0){
    //         ce++;
    //     }
    //     else{
    //         in=i+1;
    //         co++;
    //     }
    // }
    // cout<<co<<" "<<ce<<"\n";
    //     if(ce>=2 && co>=1){
    //         cout<<"YES\n";
    //         int c=0;
    //         for(int i=0;i<n;i++){
    //             if(c==2){
    //                 cout<<in<<"\n";
    //                 break;
    //             }
    //             if(arr[i]%2==0){
    //                 cout<<i+1<<" ";
    //                 c++;
    //             }     
    //        }
    //     }
    //     else if(co>=3){
    //         cout<<"YES\n";
    //         int x=0;
    //         for(int i=0;i<n;i++){
    //             if(x==3){
                    
    //                 break;
    //             }
    //             if(arr[i]%2!=0){
    //                 cout<<i+1<<" ";
    //                 x++;
    //             }     
    //         }
    //     }
    //     else{
    //         cout<<"NO\n";
    //     }
      
    
    for(int i=0;i<n;i++){
          if(arr[i]%2!=0){
            co.push_back(i+1);  
        }
        else{
              ce.push_back(i+1);
        }
    }
    //cout<<co.size()<<" "<<ce.size()<<endl;
    if(ce.size()>=2 and co.size()>=1){
        cout<<"YES"<<endl;
        for(int i=0;i<2;i++){
            cout<<ce[i]<<" ";
        }
        cout<<co[0]<<"\n";

    }
    else if(co.size()>=3){
        cout<<"YES\n";
        for(int i=0;i<3;i++){
         cout<<co[i]<<" ";
        }
        cout<<"\n";
    }
    
    else{
        cout<<"NO\n";
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
    solve();
    }
    return 0;
}
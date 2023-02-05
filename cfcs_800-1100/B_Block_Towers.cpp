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
        int n;
        cin>>n;
        long long arr[n];
        long long ans;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ans=arr[0];
        sort(arr+1,arr+n);

        for(int i=0;i<n;i++){
           if(ans<arr[i]){
                if((ans+arr[i])%2==0)
                ans=(ans+arr[i])/2;
                else{
                    ans=((ans+arr[i])/2)+1;
                }
            }
        }
            
            
        // }
        cout<<ans<<"\n";
    }
    return 0;
}
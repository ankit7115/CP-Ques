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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long sum1=0;
        long long sum2=0;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                sum1=sum1+arr[i];
            }
            else{
                sum2=sum2+arr[i];
            }
        }
        cout<<abs(abs(sum2-abs(sum1)))<<"\n";
    }

    return 0;
}
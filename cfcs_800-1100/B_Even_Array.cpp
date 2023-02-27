#include<iostream>
#include<map>

using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int even_wrong=0,odd_wrong=0;
    for(int i=0;i<n;i++){
        if(i&1){
            if(arr[i]%2==0){
                odd_wrong++;
            }
        }
        else{
            if(arr[i]&1){
                even_wrong++;
            }
        }
    }
   // cout<<even_wrong<<" "<<odd_wrong<<"\n";
    if(even_wrong==odd_wrong){
        cout<<even_wrong<<"\n";
    }
    else{
        cout<<-1<<"\n";
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
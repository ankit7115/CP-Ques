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
        vector<int> arr;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }
        if(n<3){
            cout<<-1<<"\n";
            continue;
        }
        sort(all(arr));
        int count=1,flag=0;
        int init=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]!=init){
                init=arr[i];
                count=1;
                continue;
            }
            else{
            count++;
            if(count==3){
                flag=1;
                init=arr[i];
                break;
            }
            }
        }
        if(flag==1)
        cout<<init<<"\n";
        else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
     //freopen("input.txt","r",stdin);
     //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> arr,ans;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    sort(all(arr));
    int t=n-2-1;
    int y,count=0;
    //t=3  3,0  4,1    5,2
    for(int i=0;i<n-t;i++){
        y=arr[t+i];
        x=arr[i];
        if(y<=2*x){
            count++;
        }
        //ans.push_back(x);
    }
    cout<<count;
    return 0;
}
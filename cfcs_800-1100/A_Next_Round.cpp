#include<bits/stdc++.h>
using namespace std;

#define long long int
#define all(x) (x).begin(), (x).end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[k-1];
    int count=0;
     for(int i=0;i<n;i++){
     if(arr[i]>=min && arr[i]!=0){
        count++;
     }
     }
     cout<<count;

    return 0;
}
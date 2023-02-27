#include<iostream>
#include<algorithm>
#include<numeric>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n],brr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>brr[i];
        }
        sort(arr,arr+n);
        sort(brr,brr+n);
        int l=0,m=n-1;
        for(int i=0;i<k;i++){
            int temp;
            if(arr[l]<brr[m]){
            temp=arr[l];
            arr[l]=brr[m];
            brr[m]=temp;}
            l++;
            m--;
        }
        cout<<accumulate(arr,arr+n,0)<<endl;
    }
    return 0;
}
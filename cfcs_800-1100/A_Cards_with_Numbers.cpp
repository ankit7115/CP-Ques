#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    //<int,int> mm;
    vector<int> arr(2*n);
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    int temp,k=0;
    int found=0;
    for(int i=0;i<2*n-1;i++){
        temp=arr[i];
        if(temp>=0){
        for(int j=i+1;j<arr.size();j++){
            if(temp==arr[j]){
            // p=make_pair(i+1,j+1);
            // vec.push_back(p);
            cout<<i+1<<" "<<j+1<<"\n";
            found=1;
            arr[j]=INT_MIN;
            break;
            }
            // else{
            //     cout<<-1<<"\n";
            // }
        }
        if(found==0){
            cout<<-1<<"\n";
        }
        //cout<<endl;
        found=0;
        }
    }
    
    return 0;
}
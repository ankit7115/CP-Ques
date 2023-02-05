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
    vector<int> ans={1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
    // for(auto it:ans){
    //     cout<<it<<" ";
    // }

    while(t--){
        int n;
        cin>>n;
        int index;
        for(int i=0;i<ans.size();i++){
            if(n==ans[i]){
                index=i+1;
                break;
            }
        }
        int mul=index/4;
        mul*=10;
        int rem=index%4;
        if(rem==3){
            mul+=6;
        }
        else if(rem==2){
            mul+=3;
        }
        else if(rem==1){
            mul+=1;
        }
        else{
            mul+=0;
        }
        cout<<mul<<"\n";
    }

    return 0;
}
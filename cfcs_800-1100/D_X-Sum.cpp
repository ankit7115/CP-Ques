#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //1,2  0,0 2,2 3,3
    vector<int> ans;
    int sum=0;
    for(int i=0 ; i<n ; i++){
			for(int j=0;j<m;j++){
				int sum=0;
				int r=i , it1=j-1, it2=j+1;
                for(int k=r+1;k<n;k++){
					if(it1>=0){
                     sum+=a[k][it1];
                     it1--;
                    }
					if(it2<m){
                    sum+=a[k][it2];
                    it2++;
                    }
				}
 
				it1=j-1,it2=j+1;
 
				for(int k=r-1;k>=0;k--){
					if(it1>=0) {
                    sum+=a[k][it1];
                     it1--;
                    }
					if(it2<m){
                    sum+=a[k][it2];
                     it2++;
                    }
				}
 
				sum+=a[i][j];
            ans.push_back(sum);
            
        }
    }
    cout<<*max_element(all(ans))<<endl;

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
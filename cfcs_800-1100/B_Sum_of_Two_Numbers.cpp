#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
int sumfun(int x){
    int rem;
    int sum=0;
    while(x!=0){
        rem=x%10;
        sum+=rem;
        x/=10;
    }
    return sum;
}
void solve(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<" "<<n/2<<"\n";
    }
    else if(n<=9){
        cout<<n/2+1<<" "<<n/2<<"\n";
    }
    else{
        int a=n/2+1;
        int b=n/2;
        int m=a,n=b;
        for(int i=1;i<=n;i++){
             if(abs(sumfun(m)-sumfun(n))<=1){
               cout<<m<<" "<<n<<"\n";
               break;
            }
            m=a+i;
            n=b-i;
           
        }
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
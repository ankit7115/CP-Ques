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
    int count=0;
    while(t--){
        string s;
        cin>>s;
        int ans=0;
        
        //ABSINTH, BEER, BRANDY, CHAMPAGNE, GIN, RUM, SAKE, TEQUILA, VODKA, WHISKEY, WINE
        if(s[0]>=48 and s[0]<=57){
            for(int i=0;i<s.size();i++){
                int num=s[i]-48;
                ans=ans*10+num;
            }
            //cout<<ans<<"  ";
            if(ans<18){
                
                count++;
            }
        }
        else{
            if(s=="ABSINTH" or s=="BEER" or s=="BRANDY" or s=="CHAMPAGNE" or s=="GIN" or s=="RUM" or s=="SAKE" or s=="TEQUILA" or s=="VODKA" or s=="WHISKEY" or s=="WINE"){
                count++;
            }
            else{
                continue;
            }
    
        }
        
    }
     cout<<count<<" "<<__gcd(2,4);
    return 0;
}
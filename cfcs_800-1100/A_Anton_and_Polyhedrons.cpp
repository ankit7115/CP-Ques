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
    long long sum=0;
    while(t--){
        string s;
        cin>>s;
       
        if(s=="Tetrahedron" ){
            sum+=4;
        }else if(s=="Cube"){
            sum+=6;
        }
        else if(s=="Octahedron"){
            sum+=8;
        }
        else if(s=="Dodecahedron"){
            sum+=12;
        }
        else{
            sum+=20; 
        }
    }
    cout<<sum;
    return 0;
}
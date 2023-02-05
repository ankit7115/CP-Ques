#include<bits/stdc++.h>
using namespace std;
#define long long int
#define all(x) (x).begin(), (x).end()
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int a,b;
    cin>>a>>b;

    int year=0;
    while(1){
        year++;
        a*=3;
        b*=2;
        if(a>b){
            break;
        }
    }
    cout<<year;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define long long int
#define all(x) (x).begin(), (x).end()
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int n;
    cin>>n;
    int d1,d2;
    int m=0;
    int c=0;
    while(n--){
        cin>>d1>>d2;
        if(d1>d2){
            m++;
        }
        else if(d1<d2){
            c++;
        }
    }
    if(m==c){
        cout<<"Friendship is magic!^^";
    }
    else if(m>c){
        cout<<"Mishka";
    }
    else{
        cout<<"Chris";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define long long int
#define all(x) (x).begin(), (x).end()
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> l;
    l.push_back(a+b*c);
    l.push_back(a*b+c);
    l.push_back(a+b+c);
    l.push_back(a*b*c);
    l.push_back((a*b)+c);
    l.push_back(a*(b+c));
    l.push_back((a+b)*c);
    l.push_back(a+(b*c));
    
    int max=*max_element(all(l));
    cout<<max;
    return 0;
}
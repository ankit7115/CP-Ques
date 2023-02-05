#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int> arr;
    int temp;
    for(int i=0;i<x;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    int y;
    cin>>y;
    
    for(int i=0;i<y;i++){
        cin>>temp;
        arr.push_back(temp);
    }

    sort(all(arr));

    auto it = unique(all(arr))-arr.begin();
    if(it == n) {
        cout<<"I become the guy.";
    }
    else {
        cout<<"Oh, my keyboard!";
    } 


    return 0;
}
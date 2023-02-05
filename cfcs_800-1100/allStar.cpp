#include<bits/stdc++.h>

using namespace std;
/*
int main(){
    int n;
    cin>>n;

    for (int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    for (int i=n;i>=1;i--){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;

}
*/
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=0;j--){
            cout<<"*";
        }
        for(int j=2;j<=2*i-2;j++){
            cout<<" ";
        }
        for(int j=n+i-1;j<=2*n-1;j++){
            if(i==1 && j==2*n-1){
                continue;
            }
            else
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
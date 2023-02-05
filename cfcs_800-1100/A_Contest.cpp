    #include<bits/stdc++.h>
    using namespace std;
    
    #define ll long long
    #define all(x) (x).begin(), (x).end()
    
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int misp=max({(3*(a/10)),((a-((a/250))*c))});
        int vasp=max({(3*(b/10)),((b-((b/250))*d))});

        if(misp==vasp){
            cout<<"Tie";
        }
        else if(misp>vasp){
            cout<<"Misha";
        }
        else{
            cout<<"Vasya";
        }
        return 0;
    }
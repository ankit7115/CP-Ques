#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,sum=0;
    cout<<"enter the size of set : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    float mean=sum/n;
    float sq_d;
    for(int i=0;i<n;i++){
        sq_d+=pow(arr[i]-mean,2);
    }
    cout<<"variance : "<<sq_d/n<<endl;
    cout<<"standard : "<<pow((sq_d/n),0.5);

    return 0;
}
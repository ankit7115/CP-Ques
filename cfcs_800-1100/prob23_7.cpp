#include<bits/stdc++.h>

using namespace std;

int sumit(int n){
    int sum=0;
    int rem;
    while(n!=0){
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    return sum;
}

int sumrec(int n){
    
    if(n==0){
        return 0;
    }
    int ans=sumrec(n/10);
    return ans+n%10;


}

int main(){
    int n;
    cout<<"Enter the element\n";
    cin>>n;
   
    int sum1=sumit(n);
    
    int sum2=sumrec(n);
    
    cout<<sum1<<endl<<sum2;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int GCD(int n, int m){
    if(n==0)return m;
    if(m==0)return n;
    int small=min(n,m);
    for(int i=small;i>=0;i--){
        if(n%i==0 && m%i==0)return i;
    }
}

int GCD1(int n, int m){
    if(m==0)return n;
    return GCD(m,n%m);
}

int main(){
    int n,m;
    cout<<"Enter the value of m and n."<<endl;
    cin>>n>>m;
    cout<<"GCD of "<<n<< " and "<<m<<" is ";
    cout<<GCD1(n,m)<<endl;
}
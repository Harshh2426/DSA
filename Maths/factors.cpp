#include<bits/stdc++.h>
using namespace std;

void factors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

void factors1(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i*i==n){
                cout<<i<<" ";
            }
            else{
                cout<<i<<" "<<n/i<<" ";
            }
        }
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    factors(n);
    factors1(n);
}
#include<bits/stdc++.h>
using namespace std;

void primeFactors(int n){
    int c=3;
    if(n%2==0)cout<<"2 ";
    while(c<=n){
        if(n%c==0){
            cout<<c<<" ";
        }
        c+=2;
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    primeFactors(n);
}
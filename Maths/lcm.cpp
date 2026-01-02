#include<bits/stdc++.h>
using namespace std;

int gcd(int n, int m){
    if(m==0)return n;
    return gcd(m,n%m);
}

int lcm(int m, int n){
    // m*n = lcm*gcd

    int calGcd = gcd(m,n);
    return ((m*n)/calGcd);
}

int main(){
    int n,m;
    cout<<"Enter the value of m and n : "<<endl;
    cin>>m>>n;
    cout<<"LCM OF M AND N IS "<<lcm(m,n)<<endl;
}
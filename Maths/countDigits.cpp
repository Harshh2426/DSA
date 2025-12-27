#include<bits/stdc++.h>
using namespace std;

int countDigit1(int n){
    if(n==0)return 1;
    if(n<0)n=-1*n;
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;
}

int countDigit2(int n){
    if(n==0)return 1;
    if(n<0)n=-1*n;
    return log10(n)+1;
}

int countDigit3(int n){
    if(n<0)n=-1*n;
    string str=to_string(n);
    return str.length();
}

int main(){
    int val;
    cin>>val;
    cout<<"The number of digit in "<<val<<" are ";
    cout<<countDigit3(val)<<endl;
}
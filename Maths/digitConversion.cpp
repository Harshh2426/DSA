#include<bits/stdc++.h>
using namespace std;

string decimalToBinary(int n){
    if(n==0)return "0";
    string str="";
    while(n>0){
        str+=to_string(n%2);
        n=n/2;
    }
    reverse(str.begin(),str.end());
    return str;
}

int binaryToDecimal(string str){
    int res=1, ans=0;
    for(int i=str.length()-1;i>=0;i--){
        ans=ans+res*(str[i]-'0');
        res=res*2;
    }
    return ans;;
}

int main(){
    int n;
    cin>>n;
    cout<<"The Binary value of decimal number is ";
    string bin = decimalToBinary(n);
    cout<<bin<<endl;
    cout<<"Decimal value of binary number is ";
    cout<<binaryToDecimal(bin)<<endl;
}

// important thing is that the time complexity of adding a element at the starting of
// the string is O(k) where k is the length of the string.
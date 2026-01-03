#include<bits/stdc++.h>
using namespace std;

void isPrime(int n){
    if(n<=1)cout<<n<<" is not a prime number.";return ;
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is not a prime number."<<endl;
            return;
        }
    }
    cout<<n<<" is a prime number."<<endl;
}

void isPrime1(int n){
    if(n<=1)cout<<n<<" is not a prime number.";return ;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<n<<" is not a prime number."<<endl;
            return;
        }
    }
    cout<<n<<" is a prime number."<<endl;
}

void isPrime2(int n){
    if(n<=1)cout<<n<<" is not a prime number.";return ;
    if(n==2 || n==3)cout<<n<<" is a prime number.";
    if(n%2==0 || n%3==0)cout<<n<<" is not a prime number.";return ;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || (n%(i+2)==0)){
            cout<<n<<" is not a prime number.";
            return;
        }
    }
    cout<<n<<" is a prime number.";
}

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    isPrime2(n);
}
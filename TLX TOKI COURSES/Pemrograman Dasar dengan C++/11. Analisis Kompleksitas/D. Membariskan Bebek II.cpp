#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,r,c;
    cin>>n;
    for (int i=1;i<=n/2+1;i++){
        if(n%i==0){
            if(i<=n/i){r=i; c=n/i;}
        }
    }
    cout<<r<<" "<<c<<endl;
}
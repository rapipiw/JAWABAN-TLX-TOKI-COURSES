#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,r,c;
    cin>>n;
    for (int i=1;i<=n/2+1;i++){
        for (int j=n;j>=i;j--){
            if (i*j==n) {r=i; c=j;}
        }
    }
    cout<<r<<" "<<c<<endl;
}
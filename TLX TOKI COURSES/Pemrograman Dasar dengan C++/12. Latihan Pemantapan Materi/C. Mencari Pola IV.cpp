#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x=0;
    cin>>n;
    
    for (int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
           cout<<x;
           x++;
           if (x==10) x=0;
       }
       cout<<endl;
    }
    return 0;
}

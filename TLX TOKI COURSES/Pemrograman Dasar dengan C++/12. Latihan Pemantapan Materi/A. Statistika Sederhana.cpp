#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x,min,max;
    cin>>n;
    cin>>min;
    max=min;
    for(int i=1;i<n;i++){
        cin>>x;
        if(x<min) min=x;
        if(x>max) max=x;
    }
    
    cout<<max<<" "<<min;
    return 0;
}

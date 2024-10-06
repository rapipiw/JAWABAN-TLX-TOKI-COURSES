#include <bits/stdc++.h>
using namespace std;

long long j=0;

vector<long long> & op(vector<long long> & x){
    for (int i=0;i<x.size();i++){
        x[i]=j-x[i];
    }
    x.pop_back();
    return x;
}

int main(){
    int n;
    cin>>n;
    vector<long long> data;

    for (int i=0;i<n;i++){
        long long x;
        cin>>x;
        data.push_back(x);
        j+=x;
    }
    op(data);
    for (int i=0;i<n;i++){
        cout<<data[i]<<endl;
    }
}
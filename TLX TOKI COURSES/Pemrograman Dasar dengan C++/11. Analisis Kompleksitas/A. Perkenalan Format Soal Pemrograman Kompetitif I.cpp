#include <bits/stdc++.h>
using namespace std;

int j=0;

vector<int> & op(vector<int> & x){
    for (int i=0;i<x.size();i++){
        x[i]=j-x[i];
    }
    x.pop_back();
    return x;
}

int main(){
    int n;
    cin>>n;
    vector<int> data;

    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        data.push_back(x);
        j+=x;
    }
    op(data);
    for (int i=0;i<n;i++){
        cout<<data[i]<<endl;
    }
}

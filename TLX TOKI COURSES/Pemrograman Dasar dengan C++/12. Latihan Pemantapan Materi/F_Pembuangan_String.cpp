#include <bits/stdc++.h>
using namespace std;

string cek(string s, string t){
    size_t pos=s.find(t);
    if (pos == string::npos) return s;
    s.erase(pos, t.size());
    return cek(s,t);
}

int main() {
    string s,t;
    cin>>s>>t;
    s=cek(s,t);
    cout<<s;
}
#include <iostream>
#include <string>
using namespace std;

bool palindrom(string s) {
    char o=s[0],a=s[s.size()-1];
    if (s.size()<=1){
        return true;
    }
    if (o==a){
        s.erase(s.size()-1);
        return palindrom(s.substr(1));
    }
    else{
        return false;
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << palindrom("") << endl;
    cout << palindrom("x") << endl;
    cout << palindrom("aa") << endl;
    cout << palindrom("ab") << endl;
    cout << palindrom("ini") << endl;
    cout << palindrom("itu") << endl;
    cout << palindrom("anna") << endl;
    cout << palindrom("ibu ratna antar ubi") << endl;
    cout << palindrom("rumah murah") << endl;
    cout << palindrom("aku suka rajawali bapak apabila wajar aku suka") << endl;
}

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    long long x= (op == '+')? 0:1;
    if (op=='+'){
        for(int i=0;i<data.size();i++){
        x+=stoi(data[i]);
        }
        return to_string(x);
    }
    else if (op=='*'){
        for(int i=0;i<data.size();i++){
        x*=stoi(data[i]);
        }
        return to_string(x);
    }
    else 
    return "KESALAHAN";
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}

#include <iostream>
#include <string>
using namespace std;

string biner(int n) {
    if (n==1)
        return "1";
    else if(n==0)
        return "0";
    else if(n%2==0)
        return biner(n/2)+"0";
    else
        return biner(n/2)+"1";
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << biner(0) << endl;
    cout << biner(1) << endl;
    cout << biner(512) << endl;
    cout << biner(1697) << endl;
    cout << biner(1048575) << endl;
}

#include <iostream>
using namespace std;

void cetak_menurun(int n) {
    cout << n << endl;
    if(n==1)
    return;
    cetak_menurun(n - 1);
}

int main() {
    cetak_menurun(10);
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";

    for (char c : s) {
        c = c - 'a' + 'A';
        if ( c=='Z')
        c = 'A'-1;
        c++;
        cout << c;
    }
    cout << endl;
}

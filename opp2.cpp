#include <iostream>
#include <string>
using namespace std;

class binary {
private:
    string s;
    void chk_bin(void);
public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary::read(void) {
    cout << "Enter a binary number: ";
    cin >> s;
}

void binary::chk_bin(void) {
    for (char c : s) {
        if (c != '0' && c != '1') {
            cout << "Invalid binary number. Exiting." << endl;
            exit(1);
        }
    }
}

void binary::ones_compliment(void) {
    chk_bin();
    for (char& c : s) {
        c = (c == '0') ? '1' : '0';
    }
}

void binary::display(void) {
    cout << "Binary number: " << s << endl;
}

int main() {
    binary b;
    b.read();
    // b.chk_bin(); 
    // Uncomment if you want to check binary validity before performing operations
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}

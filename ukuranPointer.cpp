#include <iostream>
using namespace std;

int main() {
    char c = 1;
    char *p = &c;
    cout << "size: " << sizeof(p);

    return 0;
}
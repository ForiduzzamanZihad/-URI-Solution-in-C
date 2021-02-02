#include <iostream>

using namespace std;

int main(void) {
    float i = 0;
    ios::sync_with_stdio(false);
    do {
        cout << "I=" << i << " " << "J=" << i + 1 << "\n";
        cout << "I=" << i << " " << "J=" << i + 2 << "\n";
        cout << "I=" << i << " " << "J=" << i + 3 << "\n";
    } while((i += 0.2) < 2.1);

    return 0;
}

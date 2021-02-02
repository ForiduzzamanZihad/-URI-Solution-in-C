#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
    int s;
    ios::sync_with_stdio(false);
    cin >> s;
    cin.ignore(1);
    while (s--) {
        string cript;
        getline(cin, cript);
        
        for (char &v:cript)
            if (v >= 65 && v <= 90 || v >= 97 && v <= 122)
                v += 3;

        reverse(cript.begin(), cript.end());
        
        int i, size = cript.size();
        for (i = size/2; i < size; i++) cript[i] -= 1;

        cout << cript << "\n"; 
    }
    return 0;
}

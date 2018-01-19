#include <iostream>

using namespace std;

int main() {
    int n = 1;
    int res = 0;
    int cur = -1;
    int prev = -1;

    while (cin >> cur && cur != 0) {
        if (prev != -1) {
            if (cur == prev) {
                ++n;
            }
            else {
                if (res < n) {
                    res = n;
                }
                n = 1;
            }
        }

        prev = cur;
    }

    if (n > res) {
        res = n;
    }

    cout << res;

    return 0;
}

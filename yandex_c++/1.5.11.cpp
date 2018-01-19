#include <iostream>

using namespace std;

int main() {
    int n;
    int max = -1;
    int res = -1;

    while (cin >> n && n != 0) {
        if (max <= n) {
            res = max;
            max = n;
        }
        else if (res < n) {
            res = n;
        }
    }

    cout << res;

    return 0;
}

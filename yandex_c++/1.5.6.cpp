#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int t = 1;

    while (t != n && t <= n) {
        t *= 2;
    }

    if (t == n) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}

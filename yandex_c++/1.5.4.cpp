#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int div = 2;
    while (n % div != 0) {
        ++div;
    }

    cout << div;

    return 0;
}

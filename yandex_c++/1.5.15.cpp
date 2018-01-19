
#include <iostream>

using namespace std;

int main() {
    int prev = -1;
    int cur = -1;

    bool prev_gr = false;
    int cnt = 0;

    while (cin >> cur && cur != 0) {
        if (prev != -1) {
            if (prev < cur && !prev_gr) {
                prev_gr = true;
            }
            else if (prev_gr) {
                if (cur < prev) {
                    ++cnt;
                    prev_gr = false;
                }
                else if (cur == prev) {
                    prev_gr = false;
                }
            }
            else {
                prev_gr = false;
            }
        }

        prev = cur;
    }

    cout << cnt;

    return 0;
}

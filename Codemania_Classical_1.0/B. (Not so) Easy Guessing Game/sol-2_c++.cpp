#include <cassert>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int l = 1, r = n;
    string result;

    while (l <= r) {
        int m = l + ((r - l) >> 1);
        cout << m << endl;
        cin >> result;
        if (result == "guessed") {
            break;
        } else if (result == "lesser") {
            l = m + 1;
            r -= (r - m) / 2;
        } else {
            l += (m - l) / 2;
            r = m - 1;
        }
    }

    assert(false);
}

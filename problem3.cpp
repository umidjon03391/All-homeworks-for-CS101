#include <iostream>
using namespace std;
int main() {
    int n, a, b, ss = 0;
    cin >> n;
    cin >> a;
    cin >> b;
    for (int i = 1; i <= n; i++) {
        string strq = to_string(i);
        int s = 0;
        for (int j = 0; j < strq.length(); j++) {
            s += stoi(string(1, strq[j]));
        }
        if (s >= a && s <= b) {
            ss += i;
        }
    }
    cout << ss << std::endl;
    return 0;
}
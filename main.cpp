#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    set<int> s;

    int n;
    cin >> n;
    int x, y;
    cin >> x;
    for (int i=0; i<x; i++) {
        int input;
        cin >> input;
        s.insert(input);
    }
    cin >> y;
    for (int i=0; i<y; i++) {
        int input;
        cin >> input;
        s.insert(input);
    }

    for (int i=1; i<=n; i++) {
        if (s.count(i) == 0) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;
    return 0;
}
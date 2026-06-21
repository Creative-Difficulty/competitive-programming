#include <iostream>

using namespace std;

bool can_reach_plate(int x, int y);

int main() {
    int n_test; cin >> n_test;

    int i = 0;
    while (i < n_test) {
        int index = i+1;

        int koshary_x; cin >> koshary_x;
        int koshary_y; cin >> koshary_y;

        bool can_reach = can_reach_plate(koshary_x, koshary_y);

        cout << (can_reach ? "YES" : "NO") << endl;

        i++;
    }

    return 0;
}

bool can_reach_plate(int x, int y) {
    if (x % 2 != 0 && y % 2 != 0) return false;
    return true;
}

#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int h; cin >> h;

    int th = 0;
    while(n--) {
        int ai; cin >> ai;
        if (ai>h) {
            th+=2;
        } else {
            th+=1;
        }
    }

    cout << th << endl;
}

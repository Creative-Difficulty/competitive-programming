#include <iostream>
#include <string>

using namespace std;

int main() {
    int n; cin >> n;

    string hi = "";
    getline(cin, hi);
    hi = "";
    getline(cin, hi);


    int num_d = std::count(hi.begin(), hi.end(),'D');
    int num_a = std::count(hi.begin(), hi.end(), 'A');

    string ps;
    if (num_a > num_d) {
        ps = "Anton";
    } else if (num_d > num_a) {
        ps = "Danik";
    } else {
        ps = "Friendship";
    }

    cout << ps << endl;
}

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int get_palindrome(std::vector<int> thing);
int compute_mex_in_arr(std::vector<int> thing);
bool is_palindrome(std::vector<int> thing);

int main() {
    int n_test; cin >> n_test;

    int i = 0;
    while (i < n_test) {

        int n_half_of_el; cin >> n_half_of_el;

        vector<int> vec_of_num;
        for(i=0;i <= (n_half_of_el*2);) {
            int input; cin >> input;
            vec_of_num.push_back(input);
            i++;
        }

        cout << "Its not main" << endl;

        int mex = get_palindrome(vec_of_num);
        cout << mex << endl;

        i++;
    }

    return 0;
}

int get_palindrome(std::vector<int> thing) {
    vector<int> first_half (thing.begin(), (thing.begin() + thing.size()/2));

    int offset = 0;
    vector<int> thing2 (thing.begin() + offset, (thing.begin() + thing.size() - offset));
    cout << "hello" << endl;

    while (!is_palindrome(thing2)) {
        cout << "hello" << offset << endl;
        thing2 = vector<int> (thing.begin() + offset, (thing.begin() + thing.size() - offset));
        offset++;
    }

    int mex = compute_mex_in_arr(thing);
    return mex;
}

int compute_mex_in_arr(std::vector<int> thing) {
    int i = 0;
    while (true) {
        int in = count(thing.begin(), thing.end(), i);
        if (in == 0) {
            return i;
        }
        i++;
    }
}

bool is_palindrome(std::vector<int> thing) {
    int offset = 0;
    while (offset < thing.size()/2) {
        if (thing.at(offset) != thing.at(thing.size() - offset)) return false;
    }

    return true;
}


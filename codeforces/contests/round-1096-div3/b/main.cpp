#include <iostream>
#include <cstring>
using namespace std;

bool is_regular_seq(string brac_seq);

int main() {
    int n_test; cin >> n_test;

    int i = 0;
    while (i < n_test) {

        int n_brac; cin >> n_brac;
        string brac_seq; cin >> brac_seq;

        bool is_reg = is_regular_seq(brac_seq);
        cout << (is_reg ? "YES" : "NO") << endl;

        i++;
    }

    return 0;
}

bool is_regular_seq(string brac_seq) {
    char arr[brac_seq.length() + 1];
    strcpy(arr, brac_seq.c_str());

    int num_o_brac = 0;
    int num_c_brac = 0;

    for(char char_ : arr) {
        if (char_ == '(') num_o_brac+=1;
        if (char_ == ')') num_c_brac+=1;
    }

    if(num_o_brac != num_c_brac) return false;

    return true;
}

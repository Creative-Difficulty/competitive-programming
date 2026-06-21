#include <array>
#include <iostream>
#include <vector>

using namespace std;

int* sort_product_div_six(int arr[], int size);
bool multi_next_is_div_six(int curr, int next);

int main() {
    int n_test; cin >> n_test;

    int i = 0;
    while (i < n_test) {

        int n_el_in_arr; cin >> n_el_in_arr;
        
        int arr_of_num[n_el_in_arr];
        for (int i = 0; i < n_el_in_arr;) {
            i++;
            cin >> arr_of_num[i];
        }

        int* is_reg = sort_product_div_six(arr_of_num, n_el_in_arr);
        cout << (is_reg ? "YES" : "NO") << endl;

        i++;
    }

    return 0;
}

int* sort_product_div_six(int arr[], int size) {
    vector<int> final_arr[size];
    int final_open_next;

    int i = 0;

    int curr = arr[i];
    int next = arr[i+1];

    if () {
        if (multi_next_is_div_six(curr, next) == true) final_arr[0] = curr;


        multi_next_is_div_six(curr,  next);
    }

    i++;
    

    return arr;
}

bool multi_next_is_div_six(int first, int second) {
    if((first * second)%6 == 0) {
        return true;
    } else {
        return false;
    }
}

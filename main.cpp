#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_unique_elements(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    for (int i=0; i<numbers.size()-1; i++) {
        if ((numbers[i] ^ numbers[i+1]) != 0) {
            return numbers[i+1];
        }
    }
    return 0;
}

bool detect_opposite_signs(int num1, int num2) {
    return ((num1 ^ num2) < 0);
}

int main() {
    cout << detect_opposite_signs(-1, -1) << endl;
    cout << detect_opposite_signs(-1, 1) << endl;
    cout << detect_opposite_signs(1, 1) << endl;
    return 0;
}
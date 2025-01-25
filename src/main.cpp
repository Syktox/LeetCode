#include <iostream>
#include "Functions.h"
#include <vector>

using namespace std;

int main() {
    Solutions s = Solutions();
    vector<int> v = {9};
    vector<int> erg = s.plusOne(v);
    for (int value : erg) {
        cout << value << endl;
    }
    return 0;
}
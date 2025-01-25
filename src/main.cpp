#include <iostream>
#include "Functions.h"
#include <vector>

using namespace std;

int main() {
    Solutions s = Solutions();
    int value = s.reverse(-2147483648);
    cout << value << " Correct: 1534236469" << endl;
    return 0;
}
#include <iostream>
#include "Functions.h"
#include <vector>

using namespace std;

int main() {
    Solutions s = Solutions();
    vector<int> v = {1,2,1,23,4,3,2,1};
    vector<int> value = s.twoSum(v, 3);
    
    for(int i = 0; i < value.size(); i++) {
        cout << value.at(i) << "\n";
    }
    
    return 0;
}
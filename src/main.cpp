#include <iostream>
#include "Functions.h"
#include <vector>

using namespace std;

int main() {
    Solutions s = Solutions();
    vector<int> v = {1,8,6,2,5,4,8,3,7};
    vector<vector<int>> erg = s.threeSum(v);
    
    for(auto it : erg) {
        cout << "Vector : \n";
        for (int x : it) {
            cout << x << "\n";
        }
        cout << "\n";
    }

    return 0;
}
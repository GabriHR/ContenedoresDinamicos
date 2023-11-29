#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
using namespace std;
int main() {
    auto square = [](int m) { return m * m; };

    auto vec =make_shared<vector<int>>();

    for (int i = 1; i <= 10; ++i) {
        vec->push_back(i);
    }

    for_each(vec->begin(),vec->end(),[&](int &m){ m=square(m); });


    for (const auto &m : *vec) {
        cout << m << " ";
    }

    return 0;
}
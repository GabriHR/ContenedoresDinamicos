#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
using namespace std;
int main() {
    auto square = [](int m) { return m * m; };

    auto vec =make_shared<vector<int>>();


}
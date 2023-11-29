#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
using namespace std;
int main() {
    auto square = [](int n) { return n * n; };

    auto vec =make_shared<vector<int>>();


}
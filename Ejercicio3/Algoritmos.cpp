#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {30, 10, 50, 20, 40};

    sort(vec.begin(), vec.end());

    cout << "Vector ordenado: ";
    for(auto i : vec) {
        cout << i << " ";
    }
    cout << "\nELemento con valor mas alto: " << *max_element(vec.begin(), vec.end()) << endl;

    return 0;
}
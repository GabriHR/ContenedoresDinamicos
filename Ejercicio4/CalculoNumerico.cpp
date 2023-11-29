#include <iostream>
#include <valarray>
using namespace std;
void printResult(const valarray<double>& result, const string& operation) {
    cout << "Despues de una " << operation << ": ";
    for(auto &element : result) {
        cout << element << " ";
    }
    cout << endl;
}


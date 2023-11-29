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

int main() {
    valarray<double> valArr = {10.5, 20.5, 30.5, 40.5, 50.5};
    valarray<double> valArr2 = {1.5, 2.5, 3.5, 4.5, 5.5};


}
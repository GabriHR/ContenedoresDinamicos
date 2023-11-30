#include <iostream>
#include <cstdlib>
#include <boost/lexical_cast.hpp>
using namespace std;
int main() {
    string str = "12345";
    int number = boost::lexical_cast<int>(str);
    cout << number <<endl;
    return 0;
}
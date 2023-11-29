#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<double> stk;

    stk.push(1.1);
    stk.push(2.2);
    stk.push(3.3);
    stk.push(4.4);
    stk.push(5.5);
    stk.push(6.6);

    cout << "Despues de push, el elemento de mayor valor es: " << stk.top() << endl;

    stk.pop();
    cout << "Despues de pop, el elemento de mayor valor es: " << stk.top() << endl;

    cout << "Top element is: " << stk.top() << endl;

    return 0;
}
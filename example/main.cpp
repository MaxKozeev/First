#include <iostream>

#include "calculator.hpp"
using namespace std;

int main() {
    float a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "a+b=" << sum(a, b) << endl;
    cout << "a/b=" << dev(a, b) << endl;
    cout << "a*b=" << mult(a, b) << endl;
    cout << "a-b=" << sub(a, b) << endl;
    cout << "a^b=" << pow(a, b) << endl;
    cout << "sqrt(a)=" << sqrt(a) << endl;
    return 0;
}

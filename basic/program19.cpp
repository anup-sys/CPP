#include <iostream>
using namespace std;

int main() {

    float p , r , t , si;

    cin >> p >> r >> t;

    si = (p * r * t) / 100;
    cout << "The simple interest is: " << si << endl;
    return 0;
}
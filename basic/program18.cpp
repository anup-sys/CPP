#include <iostream>
using namespace std;

int main() {

    float celsius;
    float fahrenheit;

    cin >> celsius;
    fahrenheit = (celsius * 9/5) + 32;
    cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;
    return 0;
}
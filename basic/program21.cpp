#include <iostream>

using namespace std;

int main() {
    float radius, perimeter, area;
    float pi = 3.14159;


    cin >> radius;

    perimeter = 2 * pi * radius;

    cout << "The perimeter of the circle is: " << perimeter << endl;   
    return 0;
}
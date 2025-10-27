#include <iostream>

using namespace std;

int main() {
    long long suma_div_3 = 0;
    long long suma_div_5 = 0;
    long long suma_div_7 = 0;
    int cantidad_div_3 = 0;
    int cantidad_div_5 = 0;
    int cantidad_div_7 = 0;
    const int limite = 15000000;

    for (int i = 1; i <= limite; ++i) {
        if (i % 3 == 0) {
            suma_div_3 += i;
            cantidad_div_3++;
        }
        if (i % 5 == 0) {
            suma_div_5 += i;
            cantidad_div_5++;
        }
        if (i % 7 == 0) {
            suma_div_7 += i;
            cantidad_div_7++;
        }
    }

    cout << "Rango: 1 a " << limite << endl;
    cout << "----------------------------------" << endl;
    cout << "Divisibles por 3:" << endl;
    cout << "  Cantidad: " << cantidad_div_3 << endl;
    cout << "  Suma: " << suma_div_3 << endl;
    cout << "----------------------------------" << endl;
    cout << "Divisibles por 5:" << endl;
    cout << "  Cantidad: " << cantidad_div_5 << endl;
    cout << "  Suma: " << suma_div_5 << endl;
    cout << "----------------------------------" << endl;
    cout << "Divisibles por 7:" << endl;
    cout << "  Cantidad: " << cantidad_div_7 << endl;
    cout << "  Suma: " << suma_div_7 << endl;

    return 0;
}
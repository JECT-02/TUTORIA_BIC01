#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    const int numero_dias = 30;
    int temp_minima = -10;
    int temp_maxima = 35;

    int valor_maximo;
    int valor_minimo;
    double suma = 0;

    for (int i = 0; i < numero_dias; ++i) {
        int temperatura_actual = temp_minima + rand() % (temp_maxima - temp_minima + 1);
        cout << "Dia " << i + 1 << ": " << temperatura_actual << "°C" << endl;

        if (i == 0) {
            valor_maximo = temperatura_actual;
            valor_minimo = temperatura_actual;
        } else {
            if (temperatura_actual > valor_maximo) {
                valor_maximo = temperatura_actual;
            }
            if (temperatura_actual < valor_minimo) {
                valor_minimo = temperatura_actual;
            }
        }
        suma += temperatura_actual;
    }

    double promedio = suma / numero_dias;

    cout << "\nResumen del mes:" << endl;
    cout << "Temperatura maxima: " << valor_maximo << "°C" << endl;
    cout << "Temperatura minima: " << valor_minimo << "°C" << endl;
    cout << "Temperatura promedio: " << promedio << "°C" << endl;

    return 0;
}

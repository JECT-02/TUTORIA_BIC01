#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int creditos = 100;
    int apuesta;
    char jugar_de_nuevo = 's';

    while (creditos > 0 && (jugar_de_nuevo == 's' || jugar_de_nuevo == 'S')) {
        cout << "Tienes " << creditos << " creditos." << endl;
        cout << "Ingresa tu apuesta (1-10): ";
        cin >> apuesta;

        if (apuesta < 1 || apuesta > 10 || apuesta > creditos) {
            cout << "Apuesta invalida. Intentalo de nuevo." << endl;
            continue;
        }

        int dado1 = 1 + rand() % 6;
        int dado2 = 1 + rand() % 6;
        int dado3 = 1 + rand() % 6;

        cout << "Resultados: " << dado1 << " " << dado2 << " " << dado3 << endl;

        if (dado1 == dado2 && dado2 == dado3) {
            creditos += apuesta * 3;
            cout << "Felicidades! Ganaste el triple de tu apuesta." << endl;
        } else if (dado1 == dado2 || dado2 == dado3 || dado1 == dado3) {
            creditos += apuesta * 2;
            cout << "Felicidades! Ganaste el doble de tu apuesta." << endl;
        } else {
            creditos -= apuesta;
            cout << "Lo siento, perdiste tu apuesta." << endl;
        }

        cout << "Credito actual: " << creditos << endl;

        if (creditos > 0) {
            cout << "Quieres seguir jugando? (s/n): ";
            cin >> jugar_de_nuevo;
        }
    }

    cout << "Juego terminado. Creditos finales: " << creditos << endl;

    return 0;
}

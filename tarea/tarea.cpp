/*juego piedra, papel y tijera*/

#include <iostream>
#include <ctime>
using namespace std;
class jugador {
private:
    int puntaje;
public:
    jugador() {
        puntaje = 0;
    }
    int elegirOpcion() {
        int opcion;
        cout << "elige la opcion (1:piedra , 2:papel, 3:tijera):";
        cin >> opcion;
        while (opcion < 1, opcion>3) {
            cout << "Opcion incorrecta. Elige nuevamente: ";
            cin >> opcion;
        }

        return opcion;
    }

    void aumentarPuntaje() {
        puntaje++;
    }

    int getPuntaje() {
        return puntaje;
    }

};

int main() {
    jugador jugadorN1, jugadorN2;
    srand(time(nullptr));

    while (true) {
        int opcionJugadorN1 = jugadorN1.elegirOpcion();
        int opcionJugadorN2 = jugadorN2.elegirOpcion();

        cout << "El jugador 1 elige: ";
        switch (opcionJugadorN1) {
        case 1:
            cout << "PIEDRA";
            break;
        case 2:
            cout << "PAPEL";
            break;
        case 3:
            cout << "TIJERA";
            break;
        }
        cout << endl;

        cout << "El jugador 2 elige: ";
        switch (opcionJugadorN2) {
        case 1:
            cout << "PIEDRA";
            break;
        case 2:
            cout << "PAPEL";
            break;
        case 3:
            cout << "TIJERA";
            break;
        }
        cout << endl;

        if (opcionJugadorN1 == opcionJugadorN2) {
            cout << "Empate" << endl;
        }
        else if ((opcionJugadorN1 == 1 && opcionJugadorN2 == 3) ||
            (opcionJugadorN1 == 2 && opcionJugadorN2 == 1) ||
            (opcionJugadorN1 == 3 && opcionJugadorN2 == 2)) {
            cout << "Jugador 1 gana" << endl;
            jugadorN1.aumentarPuntaje();
        }
        else {
            cout << "Jugador 2 gana" << endl;
            jugadorN2.aumentarPuntaje();
        }

        cout << "Puntaje actual Jugador 1: " << jugadorN1.getPuntaje() << endl;
        cout << "Puntaje actual Jugador 2: " << jugadorN2.getPuntaje() << endl;

        char continuar;
        cout << "Quieren continuar la partida....(v/n): ";
        cin >> continuar;
        if (continuar != 'v') {
            break;
        }
    }

    return 0;
}

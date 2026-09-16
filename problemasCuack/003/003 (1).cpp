    
#include <iostream>
using namespace std;

class Fecha {
public:
    int dia, mes, ano;
    int hora, minuto, segundo;

    void leer() {
        char sep1, sep2, sep3, sep4;
        cin >> dia >> sep1 >> mes >> sep2 >> ano;
        cin.get(); // Leer el espacio
        cin >> hora >> sep3 >> minuto >> sep4 >> segundo;
    }

    void mostrar() const {
        cout << dia << '/' << mes << '/' << ano << ' ';
        if (hora < 10) cout << '0';
        cout << hora << ':';
        if (minuto < 10) cout << '0';
        cout << minuto << ':';
        if (segundo < 10) cout << '0';
        cout << segundo;
    }

    bool operator<(const Fecha &otra) const {
        if (ano != otra.ano) return ano < otra.ano;
        if (mes != otra.mes) return mes < otra.mes;
        if (dia != otra.dia) return dia < otra.dia;
        if (hora != otra.hora) return hora < otra.hora;
        if (minuto != otra.minuto) return minuto < otra.minuto;
        return segundo < otra.segundo;
    }

    bool operator==(const Fecha &otra) const {
        return dia == otra.dia && mes == otra.mes && ano == otra.ano &&
               hora == otra.hora && minuto == otra.minuto && segundo == otra.segundo;
    }
};

int main() {
    int N;
    cin >> N;

    Fecha anterior, actual;
    anterior.leer();
    for (int i = 1; i < N; i++) {
        actual.leer();

        actual.mostrar();

        if (actual < anterior) {
            cout << " ES ANTERIOR A ";
        } else if (actual == anterior) {
            cout << " ES IGUAL A ";
        } else {
            cout << " ES POSTERIOR A ";
        }

        anterior.mostrar();
        cout << '\n';

        anterior = actual;
    }

    return 0;
}

    

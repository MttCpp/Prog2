#include <iostream>
#define DIM 100
using namespace std;

void leggi(double V[]){         //parametro formale una reference all'array
    int i = 0;
    do {
        cout << "Inserisci l'elemento indice: " << i << endl;
        cin >> V[i];
    }while(V[i++] != 0); //se voglio semplificare la complessità spaziale uso un secondo array grandezza i

}

void stampa(double V[]){
    cout << "Stampa" << endl;
    int i = 0;
    while (V[i] != 0.0){
        cout << V[i++] << "\t";
    }
}

int main(){
    
    double V[DIM];
    leggi(V);
    stampa(V);
    return 0;
}

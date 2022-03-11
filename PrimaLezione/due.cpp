#include <iostream>
#include <math.h>
using namespace std;

void metodo1(int n){
    // controlla uno ad uno e mettili in un array
    int i = 0, j = 2;
    bool primo = true;
    while(i < n){
        if (primo) {
            cout << j << endl;
            i++;
        }
        j++;
        primo = true;
        for(int k = j-1; k > 1; k--){
            if (j%k == 0) primo = false;
        }
    }
}

void metodo2(int n){
    int i = 0, j = 2;
    bool primo = true;
    while(i < n){
        if (primo) {
            cout << j << endl;
            i++;
        }
        j++;
        primo = true;
        for(int k = 2; k <= j/2; k++){
            if (j%k == 0) primo = false;
        }
    }
}

void metodo3(int n){
    int i = 0, j = 2;
    bool primo = true;
    while(i < n){
        if (primo) {
            cout << j << endl;
            i++;
        }
        j++;
        primo = true;
        for(int k = 2; k <= floor(sqrt(j)); k++){
            if (j%k == 0) primo = false;
        }
    }
}

int main(){
    int n = 0;
    cout << "Quanti numeri primi vuoi? " << endl;
    cin >> n;
    metodo1(n); // complessità lineare (n-1)
    metodo2(n); // complessità semplificata (n/2)
    metodo3(n); // complessità logaritmicamente semplificata (sqrt(n))
}
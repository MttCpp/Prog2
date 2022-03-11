#include <iostream>
using namespace std;

void pascal(int n){
    int **P = new int*[n];    //uso una matrice di dimensione nxn
    for(int i = 0; i < n; i++){
        P[i] = new int[n];
    }
    P[0][0] = 1;              //il primo elemento lo inizializzo a 1
    for(int i = 1; i < n; i++){
        for(int j = 0; j <= i+1; j++){
            if(j==0) P[i][j] = 1;          //il primo elemento di ogni riga lo inizializzo a 1
            if(j==i+1) P[i][j] = 1;         //anche l'ultimo
            P[i][j] = P[i-1][j-1] + P[i-1][j]; //gli elementi in mezzo sono la somma dei due soprastanti
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(j==0){           //stampa
                for(int k =0; k < n-i; k++)     //aggiungo n-i spazi ampi la metà della
                cout << "   ";                  //distanza tra ogni numero per rendere la stampa piramidale
            }
            cout << P[i][j] << "      ";            //distanza tra ogni numero
        }
        cout << endl;
    }
}

int main(){
    int n = 0;
    cout << "inserisci un numero" << endl;
    cin >> n;
    pascal(n);

    return 0;
}
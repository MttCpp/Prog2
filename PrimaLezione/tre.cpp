#include <iostream>
using namespace std;

void spazi(char *s){
    for (int i = 0; s[i] != '\0'; i++){
        if(s[i]==32 && s[i+1] == 32){  //se ci sono più di uno spazio(32) consecutivo
            while(s[i+1] == 32){       //entra in questo ciclo che li fa scalare di una posizione
                for(int j = i; s[j] != '\0'; j++) s[j] = s[j+1]; // finchè non termina la stringa
            } //ripeti finchè non ci sono mai due spazi consecutivi
        }
    }

}

int main(){
    char s[] = {"ii   i     i i  i  i  i."};
    spazi(s);
    cout << endl <<" stringa : " << endl;
    for(int i = 0; i < sizeof(s) / sizeof(char); i++){      //non so la nuova grandezza della stringa
        cout << s[i];
    }
}
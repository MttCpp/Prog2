#include <iostream>
using namespace std;

string mese(string month){
    if (strcmp(month.c_str(), "01") == 0) return "gennaio"; // prendo il mese e lo sostituisco col suo nome
    if (strcmp(month.c_str(), "02") == 0) return "febbraio"; //importante convertire la stringa month in
    if (strcmp(month.c_str(), "03") == 0) return "marzo";  //const char per poter fare la strcmp
    if (strcmp(month.c_str(), "04") == 0) return "aprile"; // che ritorna 0 se le stringhe sono uguali
    if (strcmp(month.c_str(), "05") == 0) return "maggio";
    if (strcmp(month.c_str(), "06") == 0) return "giugno";
    if (strcmp(month.c_str(), "07") == 0) return "luglio";
    if (strcmp(month.c_str(), "08") == 0) return "agosto";
    if (strcmp(month.c_str(), "09") == 0) return "settembre";
    if (strcmp(month.c_str(), "10") == 0) return "ottobre";
    if (strcmp(month.c_str(), "11") == 0) return "novembre";
    if (strcmp(month.c_str(), "12") == 0) return "dicembre";
    else return "";
}

int anno(string year){
    string ret1 = "19", ret2 = "20";   //per la codifica dell'anno ho deciso arbitrariamente
    ret1 += year;                      //che ogni data terminante con un anno > x/x/25 verrà
    ret2 += year;                      //considerata una data del secolo scorso
    if (stoi(ret1) < 1925) return stoi(ret2);  //per convertire la stringa in intero uso stoi()
    return stoi(ret1);
}

void converti(string s){
    string day =  "", month = "", year = "";  //valido l'input in modo tale che
    day += s[0]; day += s[1];                 //ogni posizione della stringa ha un
    month += s[3]; month += s[4];             //significato ben preciso
    year += s[6]; year += s[7];
    cout << "month = " << month << endl;
    month = mese(month);            //converto il mese da (string)numero a stringa
    int y = anno(year);             //converto l'anno da string a intero

    cout << day << "  " << month << "  " << y << endl;          //stampo la data nel formato richiesto

}

int main(){
    string s = "";
    cout << "Inserisci data nel formato gg/mm/aa" << endl;
    cin >> s;
    converti(s);
}
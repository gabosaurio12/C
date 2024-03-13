#include <stdio.h>

int longitudCad(string cad){
    int i = 0;
    while (cad[i] != '\0')
        i++;
    return i;
}

string iniCad(int pos, string cad){
    string inicio = "";
    for (int i = 0; i < pos; i++)
        inicio = inicio + cad[i];

    return inicio;
}

string finCad(int pos, string cad){
    string inicio = "";
    for
}

int main(){
    string cad1, cad2;
    cout << "Ingresa la Xadena Base y la Cadena que quieres Buscar \n";
    cout << "Cadena Base ";
    scanf("%s", &cad1);
    cout << "Cadea a Buscar ";
    scanf("%s", &cad2);

    encontrarCad(cad1,cad2);

    return 0;
}

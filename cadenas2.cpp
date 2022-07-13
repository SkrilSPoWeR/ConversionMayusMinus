#include <iostream>
#include <string>
#include <string.h>

using namespace std;


string convertir(string cad, int opcion);


int main(int argc, char const *argv[]){

    string palabra = "";
    
    cout<<"Escribe parabra y te diré su longitud: ";
    getline(cin, palabra); //Solicito string

    //Impresion de pantalla
    cout<<"Palabra en mayuscula: "<<convertir(palabra,1)<<endl;
    cout<<"Palabra en minusculas: "<<convertir(palabra, 2)<<endl;
    cout<<"Primera en mayuscula: "<<convertir(palabra, 3)<<endl;


    cin.get();
    return 0;

}

//Funcion de conversion, depende de la variable opcion
string convertir(string cad, int opcion){

    switch (opcion){

        case 1: //Mayuscula
            for (int c = 0; c < cad.length(); c++){
                cad[c] = toupper(cad[c]);
            }
            break;
        case 2: // Minuscula
            for (int c = 0; c < cad.length(); c ++){
                cad[c] = tolower(cad[c]);
            }
            break;
        case 3: //Primera en mayucula
            cad[0] = toupper(cad[0]);
            break;
    }

    return cad;
    

}
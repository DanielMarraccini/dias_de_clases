#include <iostream>

using namespace std;

//d�as de clases de programaci�n (martes, jueves, viernes).

int main(){

string dia;
int clase = 0;

cout<<"Ingrese un d�a: "; cin >> dia;



if (dia == "martes"){

    clase = 2;
}else if (dia == "jueves"){

    clase = 4;
} else if (dia == "viernes"){

    clase = 5;
}

cout<<endl<<endl;

switch (clase){

case 2:
case 4:
case 5:
    cout<<"Hay clases."; break;

default:
    cout<<"No hay clases.";
}

cout<<endl;

return 0;
}

/*EJERCICIO 6
Implemente una función que reciba dos cadenas a y b; y copie los elementos de la cadena a para la cadena b. */

#include<iostream>
using namespace std;

//Funcion que retorna el tamaño de las cadenas
int StringLenght(char Cadena[]){
	int tam=0;
	while(Cadena[tam] != '\0'){
		tam++;
	}
	return tam;
}

//Funcion copiar
void PassData(char CadenaA[], char CadenaB[]){						
	for(int i=0; i<StringLenght(CadenaA)+1; i++){					//Se recorre el tamaño+1 para incluir el Null
		CadenaB[i] = CadenaA[i];									//Se copia la cadenaA a la cadenaB
	}
}

//FuncionPrincipal
int main(){
	char CadenaA[30], CadenaB[30];									//Se crean 2 cadenas, la cadena B estara vacia
	cout<<"Ingrese una palabra "; cin.getline(CadenaA, 30,'\n');
	PassData(CadenaA, CadenaB);
	cout<<"Su nueva cadena es "<< CadenaB;							//Se imprime la cadena B
	return 0;
} 

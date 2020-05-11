/*EJERCICIO 5
Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
(asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a). */

#include<iostream>
using namespace std;

//Funcion que retorna el tamanio de las cadenas
int StringLenght(char Cadena[]){
	int tam=0;
	while(Cadena[tam] != '\0'){
		tam++;
	}
	return tam;
}

//Funcion que concatena la cadena A a la cadena B
void concatenarStrings(char CadenaA[], char CadenaB[]){
	int cont=0;
	for(int i=StringLenght(CadenaB); i<StringLenght(CadenaB)+StringLenght(CadenaA); i++ , cont++){		//Recorremos el tamaño de la suma de las dos cadenas, en B empieza desde su ultima posicion y en A desde su primera posicion
		CadenaB[i]=CadenaA[cont];																		//Agregamos a la candenaB la cadenaA 
	}
	cout<<"La Cadena B concatenada es: "<<CadenaB;
}

//FuncionPrincipal
int main(){
	char CadenaA[30], CadenaB[60];												//La cadena B tiene que tener mayor espacio que la cadena A
	cout<<"Ingrese una palabra "; cin.getline(CadenaB, 30,'\n');
	cout<<"Ingrese otra palabra "; cin.getline(CadenaA, 60,'\n');
	concatenarStrings(CadenaA, CadenaB);
	return 0;
}  

/*EJERCICIO 4
Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)*/

#include<iostream>

using namespace std;

//Funcion Iterativa
int StringLenghtI(char Cadena[]){
	int cont=0;											//Variable que funciona como contador y posicion de la cadena
	
	while(Cadena[cont] != '\0'){						//Mientras la posicion de la Cadena sea diferente al valor Nulo
		cont++;										
	}
	
	return cont;
}

//Funcion Recursiva
int suma = 0;											//Variable que almacenara la respuesta
int StringLenghtR(char Cadena[], int suma){
	if(Cadena[suma]=='\0'){								//Caso base
		return suma;
	}
	else{												
		StringLenghtR(Cadena, suma+1);					//Se verificara la siguiente posicion de la cadena y se vuelve a llamar a la funcion
	}
}

//Funcion Principal
int main(){
	
	char Cadena[30];
	cout<<"Ingrese una palabra "; cin.getline(Cadena, 30,'\n');
	cout<<"El tamaño de su cadena usando la funcion iterativa es: "<<StringLenghtI(Cadena)<<endl;
	cout<<"El tamaño de su cadena usando la funcion recursiva es: "<<StringLenghtR(Cadena,suma)<<endl;
	
	return 0;
}  

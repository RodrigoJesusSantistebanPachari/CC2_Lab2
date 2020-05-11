/*EJERCICIO 1
Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo.
(Iterativa y recursiva).*/

#include<iostream>
using namespace std;

//Funcion Iterativa
int SumarIterativo(int *Arreglo, int tam){
	int sum = 0;
	for(int i=0; i<tam; i++){
		sum+=Arreglo[i]; 											//Se suman los elementos encontrados en cada posicion del vector
	}
	return sum;
}

//Funcion Recursiva
int SumarRecursivo(int *Arreglo, int tam){
	if(tam-1 == 0){													//Caso base
		return Arreglo[0];
	}
	else{															//Se recorre el vector desde la ultima posicion hasta la primera
		return Arreglo[tam-1]+SumarRecursivo(Arreglo,tam-1);		
	}
}

//Funcion Principal
int main(){
	
	int tam, *Arreglo;												//Usamos un vector dinamico
	cout<<"Ingrese el tamaño de su vector "; cin>>tam;
	Arreglo = new int[tam];
	for(int i=0; i<tam; i++){										//Se piden los datos del vector al usuario
		cout<<endl<<"Ingrese un numero "; cin>>Arreglo[i];
	}
	
	cout<<"\nLa suma del vector con el metodo iterativo es: "<<SumarIterativo(Arreglo,tam)<<endl;
	cout<<"La suma del vector con el metodo recursivo es: "<<SumarRecursivo(Arreglo,tam)<<endl;
	
	return 0;
}  

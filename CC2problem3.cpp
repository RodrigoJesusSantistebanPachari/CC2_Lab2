/* 	EJERCICIO 3
	Implementar una funci�n que ordene los elementos de un arreglo: ascendente. */

#include<iostream>
using namespace std;

//Funci�n Ordenamiento por Inserci�n
void ordenarArray(int *Arreglo, int tam){
	
	int aux, posicion;										//Variable auxiliar y la otra que guardara la posicion del vector
	
	for(int i=0; i<tam; i++){								//Se recorre cada posicion del vector
		
		aux	= Arreglo[i];																
		posicion = i;
		
		while(((Arreglo[posicion-1])>aux) && (posicion>0)){	//Verificacion si cada elemento del vector es mayor al de su izquierda
			Arreglo[posicion] = Arreglo[posicion-1];		//En caso sea as� se cambian los valores
			posicion-=1;
		}
		Arreglo[posicion] = aux;							
	}
}

//Funci�n Principal
int main(){
	
	int tam, *Arreglo;
	cout<<"Ingrese el tama�o de su vector "; cin>>tam;
	Arreglo = new int[tam];
	for(int i=0; i<tam; i++){
		cout<<endl<<"Ingrese un numero "; cin>>Arreglo[i];
	}
	cout<<"\nSu vector ordenado es:"<<endl;
	ordenarArray(Arreglo,tam);
	
	for(int j=0;j<tam;j++){
		cout<<Arreglo[j]<<endl;
	}
	
	return 0;
}  

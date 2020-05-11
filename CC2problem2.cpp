/*EJERCICIO 2
Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva).*/

#include<iostream>
using namespace std;

//Funcion Iterativa
void invertirArrayI(int *Arreglo, int tam){
	int aux;																
	
	for(int i=0; i<tam/2; i++){								//Se recorre hasta la mitad del tamaño del vector												
		aux = Arreglo[i];									//Desde aqui se hace un swap manual					
		Arreglo[i] = Arreglo[tam-i-1];
		Arreglo[tam-i-1] = aux;
	}
}

//Funcion Recursiva
void invertirArrayR(int *Arreglo, int tam){			
    if (tam == 1){											//CasoBase
    	return;
	} 
    else{
		int aux = Arreglo[0]; 								//Variable auxiliar que guardara la primera posicion del vector			
    	for(int i = 0; i < tam-1 ;  i++){					//Las posiciones del vector recorren un espacio
    		Arreglo[i] = Arreglo[i+1];
		}
		Arreglo[tam-1] = aux;								//El elemento de la ultima posicion del vector se guarda en la variable auxiliar
		tam--;												//Tamaño del vector reduce en 1 para hacer lo mismo pero 1 posicion menos
		invertirArrayR(Arreglo, tam);						//Se hace lo mismo hasta llegar a la posicion 0 del vector
	}
}

//Funcion Principal
int main(){
	
	int tam, *Arreglo;
	cout<<"Ingrese el tamaño de su vector "; cin>>tam;
	Arreglo = new int[tam];
	for(int i=0; i<tam; i++){									//Pedimos datos al usuario
		cout<<endl<<"Ingrese un numero "; cin>>Arreglo[i];
	}
	
	invertirArrayI(Arreglo,tam);
	cout<<"\nEl vector invertido por la funcion iterativa es: "<<endl;				
	for(int j=0;j<tam;j++){														//Imprimimos el vector invertido
		cout<<Arreglo[j]<<endl;
	}
	
	invertirArrayR(Arreglo, tam);
	cout<<"\nEl vector invertido nuevamente por la funcion recursiva es: "<<endl;   //Imprimimos el vector invertido que se invirtio antes
	for(int k=0;k<tam;k++){
		cout<<Arreglo[k]<<endl;
	}
	return 0;
}  

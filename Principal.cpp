#include <iostream>

using namespace std;

#include "Nodo.h"
#include "Pila.h"


int main(){
	int opcion;
	Pila* pila =new Pila();
	int valor;
	do{
		system("cls");
		cout<<"\t----------MENU ------------- "<<endl
			<<"1. Insertar pila "<<endl
			<<"2. Sacar de la pila"<<endl
			<<"3. Mostrar Pila "<<endl
			<<"4. Vaciar Pila" << endl
			<<"5. Salir" << endl
			<<"Opcion :  ? "; 
		cin>>opcion;
		
		
		switch(opcion){
		case 1: 
			cout<<"Digite un numero"<<endl;
			cin>>valor;
			pila->push(new Nodo(valor));
			pila->mostrarPila();
			system("pause");
			break;
			
		case 2: 
			
			pila->pop();
			pila->mostrarPila();
			system("pause");
			break;
		case 3: 
			pila->mostrarPila();
			system("pause");
			break;
		case 4:
			pila->vacialPila();
			pila->mostrarPila();
			system("pause");
		}
	
		
	} while(opcion!=5);
}

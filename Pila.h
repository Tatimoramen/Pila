#ifndef PILA_H
#define PILA_H

class Pila{
private:
	Nodo * cabeza;
	int contador;
public:
	Lista(){
		this->cabeza= NULL;
		this->contador = 0;
	}
	bool estaVacia(){
		return cabeza==NULL;
	}
	int getContador(){
		return  this -> contador;
	}
	void push (Nodo * nodo){
		if(!estaVacia()){
			nodo->setSigte(cabeza);
			cabeza=nodo;
		}else{
			cabeza=nodo;
		}
		contador ++;
	}
		
	pop(){
		if(!estaVacia()){
			Nodo* aux = this->cabeza;
		this->cabeza = this->cabeza->getSigte();
		delete aux;
	}
	}
	void vacialPila(){
		while(this->cabeza){
			this->pop();
		}
	}
				
	
	void mostrarPila(){
		Nodo * aux;
		if(!estaVacia()){
			aux=cabeza;
			cout<<"Cabeza\n";
			while(aux!=NULL){
				cout<<" "<<aux->getData()<<"--->";								
				//mostrar los demas con los get																
				aux=aux->getSigte();
			}
			cout<<"NUll"<<endl;
		}else{
			cout<<"La Pila esta vacia"<<endl;
		}
	}
};

#endif

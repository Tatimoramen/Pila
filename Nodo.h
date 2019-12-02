#ifndef NODO_H
#define NODO_H
class Nodo {
private:
	int data;
	Nodo * sigte;
	
	
public:
	Nodo(){
		this -> data = 0;
		this -> sigte = NULL;
	}
	
	Nodo (int data){
		
		this -> data = data;
		this -> sigte = NULL;				
	}
		
	void setData(int data){
		this -> data = data;
	}

	int getData(){
		return this -> data;
	}
								
	void setSigte(Nodo* sigte){
		this->sigte = sigte;
	}
	Nodo * getSigte(){
		return this->sigte;
	}						
};
#endif

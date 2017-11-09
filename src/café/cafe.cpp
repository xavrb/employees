#include <iostream>
#include <string>
using namespace std;


class cafe{
	private: 
		string nombre;
		string tamanio;
		string sabor;
		float precio;

	public:
		cafe(string, string, string,float);
		
		void ingresar();
		void mostrar();

		

};

cafe::cafe(string nombre, string tamanio, string sabor,float precio){
	nombre = ' ';
	tamanio = ' ';
	sabor = ' ';
	precio =0.0;
}



int main(){

 
	int x;
	for(x=0;x<5;x++){

		starbucks[x].ingresar();
		starbucks[x].mostrar();
	}

return 0;

}


void cafe::ingresar(){
	cout << "Ingresa el nombre del cafe";
	cin >>  nombre;
	cout << "Ingresa el tamanio";
	cin >> tamanio;
	cout << "Ingresa el sabor";
	cin >>  sabor;
	cout << "Ingresa el precio";
	cin >> precio;

}


void cafe::mostrar(){
 
	cout << "\n"<<  nombre << "\n";
 
	cout << tamanio<< "\n";
 
	cout <<  sabor<< "\n";
 
	cout << precio<< "\n";

}

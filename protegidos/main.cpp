#include <iostream>
using namespace std;
class Persona{
protected:
	string nombre;
public:
	Persona(){
	}
	Persona(string nombre){
		this->nombre=nombre;
		cout<<nombre<<endl;
	}
	void setNombre(string nombre)
	{
		this->nombre=nombre;
	}
	~Persona(){
		cout<<"llamando al destructor de Persona"<<endl;
	}
	
};
class Asalariado:public Persona{
private:
	double salario;
public:
	Asalariado(string nombre){
	  	this->nombre=nombre;
	}
	void setSalario(double salario){
		this->salario=salario;
	}
	double getSalario()
	{
		return salario;
	}
	void imprimirDatos(){
		cout<<"El nombre es:"<<nombre;
	}
	~Asalariado(){
		cout<<"llamando al destructor de Asalariado"<<endl;
	}
};


int main(int argc, char** argv) {
	Persona p1("Pepe");
	Persona p2("Juan");
	Persona p3("Ana");
	Asalariado p4("MANUEL");
	p4.setSalario(10000);
	cout<<"el salario es:"<<p4.getSalario()<<endl;
	p4.imprimirDatos();
	return 0;
}

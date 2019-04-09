#include <iostream>
using namespace std;
class Abuelo{
protected:
	int fotos;
protected:
	double terreno;
public:
	void setTerreno(double terreno)
	{this->terreno=terreno;}
	double getTerreno()
	{return terreno;}
	void setFotos(int fotos)
	{this->fotos=fotos;}
	double getFotos()
	{return fotos;}
	void comprarTerreno(double terreno)
	{this->terreno=terreno;}
};

class Hijo:public Abuelo{
protected:
	int autos;
public:
	void setAutos(int autos)
	{this->autos=autos;}
	int getAutos()
	{return autos;}
	void heredaTerreno(double terreno)
	{this->terreno=this->terreno+terreno;}
	void heredaAutos(int autos)
	{this->autos=this->autos+autos;}
};
class Nieto: public Hijo{
protected:
	int motos;
	int casas;
public:
	void setMotos(int motos)
	{this->motos=motos;}
	int getMotos()
	{return motos;}
	void setCasas(int casas)
	{this->casas=casas;}
	int getCasas()
	{return casas;}
	void adquirirHerencia()
	{
		cout<<"mi terreno tiene:"<<terreno<<" mts cuadrados"<<endl;
		cout<<"tengo:"<<autos<<" autos"<<endl;
		cout<<"tengo:"<<motos<<" motos"<<endl;
		cout<<"tengo:"<<fotos<<" fotos"<<endl;
	}
	
};

int main(int argc, char** argv) {
	Hijo h1;
	Abuelo a1;
	Nieto n1;
	h1.setTerreno(1000);
	h1.setAutos(4);
	cout<<"Terreno metros cuadrados Hijo:"<<h1.getTerreno()<<endl;
	cout<<"Autos:"<<h1.getAutos()<<endl;
	a1.comprarTerreno(500);
	cout<<"Terreno metros cuadrados Abuelo:"<<a1.getTerreno()<<endl;
	cout<<"Autos:"<<h1.getAutos()<<endl;
	h1.heredaTerreno(a1.getTerreno());
	cout<<"Terreno metros cuadrados Hereda:"<<h1.getTerreno()<<endl;
	a1.comprarTerreno(1500);
	h1.heredaTerreno(a1.getTerreno());
	cout<<"Terreno metros cuadrados Hijo:"<<h1.getTerreno()<<endl;
	cout<<"autos:"<<h1.getAutos()<<endl;
	n1.setMotos(20);
	n1.setTerreno(h1.getTerreno());
	n1.setAutos(h1.getAutos());
	n1.setCasas(3);
	a1.setFotos(10);
	n1.setFotos(a1.getFotos());
	n1.adquirirHerencia();
	cout<<"las casas son:"<<n1.getCasas()<<endl;
	return 0;
}

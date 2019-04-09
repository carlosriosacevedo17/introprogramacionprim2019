#include <iostream>
using namespace std;
class Automovil{
private:
	string color;
	string modelo;
	float peso;
	float km;
	string marca;
	float precio;
public:
	void setColor(string);
	string getColor();
	void setModelo(string);
	string getModelo();
	void setMarca(string);
	string getMarca();
	void setPeso(float);
	float getPeso();
	void setKm(float);
	float getKm();
	void imprimeInfo();
	float getPrecio();
	void setPrecio(float);
	void catalogoAutos(Automovil [], int);
	void ordernarPrecioAuto(Automovil [], int);
	void busquedaRangoPrecioAuto(Automovil [], int,float,float);
};
void Automovil::setMarca(string marca)
{this->marca=marca;}
void Automovil::setModelo(string modelo)
{this->modelo=modelo;}
void Automovil::setColor(string color)
{this->color=color;}
void Automovil::setPeso(float peso)
{this->peso=peso;}
void Automovil::setKm(float km)
{this->km=km;}
string Automovil::getMarca()
{return marca;}
string Automovil::getModelo()
{return modelo;}
string Automovil::getColor()
{return color;}
float Automovil::getPeso()
{return peso;}
float Automovil::getKm()
{return km;}
void Automovil::setPrecio(float precio)
{this->precio=precio;}
float Automovil::getPrecio()
{return precio;}

void Automovil::catalogoAutos(Automovil v[], int n)
{
 	for(int i=0;i<n;i++)
 	 v[i].imprimeInfo();
}

void Automovil::ordernarPrecioAuto(Automovil v[], int n)
{
   Automovil auxiliar;
   for(int j=0;j<n-1;j++)
   {
   	for(int i=0;i<n-1;i++)
   	 {
   	 	if (v[i].getPrecio()<v[i+1].getPrecio())
   	 	 {
   	 	 	auxiliar=v[i];
   	 	 	v[i]=v[i+1];
   	 	 	v[i+1]=auxiliar;
		 }
     }
   }	
}

void Automovil::busquedaRangoPrecioAuto(Automovil v[], int n,float ri,float rf)
{
	for(int i=0;i<n;i++)
	{
		if ((v[i].getPrecio()>=ri) && (v[i].getPrecio()<=rf))
		  v[i].imprimeInfo();
		
	}
}


void Automovil::imprimeInfo()
{cout <<"La marca es:"<<getMarca()<<endl;
 cout <<"El modelo es:"<<getModelo()<<endl;
 cout <<"El color es:"<<getColor()<<endl;
 cout <<"El peso es:"<<getPeso()<<endl;
 cout <<"El Km es:"<<getKm()<<endl;
  cout <<"Precio:"<<getPrecio()<<endl;
}


int main(int argc, char** argv) {
	Automovil a1,a2,a3;
	Automovil vectorAuto[10];
	a1.setMarca("VW");
	a1.setModelo("JETTA GLI");
	a1.setColor("TITANIUM");
	a1.setPeso(2.0);
	a1.setKm(1);
	a1.setPrecio(500);
	vectorAuto[0]=a1;
	a2.setMarca("NISSAN");
	a2.setModelo("GTR");
	a2.setColor("BLACK");
	a2.setPeso(2.0);
	a2.setKm(1);
	a2.setPrecio(600);
	vectorAuto[1]=a2;
	a3.setMarca("MERCEDES BENZ");
	a3.setModelo("A45AMG");
	a3.setColor("BLACK");
	a3.setPeso(1.8);
	a3.setKm(1);
	a3.setPrecio(300);
	vectorAuto[2]=a3;
	a1.catalogoAutos(vectorAuto,3);
	a1.ordernarPrecioAuto(vectorAuto,3);
	a1.catalogoAutos(vectorAuto,3);
	//a1.busquedaRangoPrecioAuto(vectorAuto,3,600000,900000);
	return 0;
}

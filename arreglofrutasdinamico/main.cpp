#include <iostream>
using namespace std;
class Frutas{
private:
	string nombre;
	float peso;
public:
	string getFruta();
	void setFruta(string);
    float getPeso();
    void setPeso(float);
    void ordenaPesoAsc(Frutas [], int);
};
string Frutas::getFruta()
{return nombre;}
void Frutas::setFruta(string nombre)
{this->nombre=nombre;}
float Frutas::getPeso()
{return peso;}
void Frutas::setPeso(float peso)
{this->peso=peso;}
void Frutas::ordenaPesoAsc(Frutas vector[], int tam)
{
	Frutas obj1;
	for(int j=0;j<tam;j++)
	{
		for(int i=0;i<tam-1;i++)
		{
			if (vector[i].getPeso()>vector[i+1].getPeso())
			 {
			 	obj1=vector[i];
			 	vector[i]=vector[i+1];
			 	vector[i+1]=obj1;
			 }
		}
	}
}

int main()
{
    cout << "Cuantas frutas ingresa?: ";
    int lon;
    string fruta;
    float peso;
    cin >> lon;
    Frutas *miArreglo = new Frutas[lon];
    Frutas f1;
    for(int i=0;i<lon;i++)
    {
        cout <<"FRUTAS["<<i<<"]: ";
        cin>>fruta;
        f1.setFruta(fruta);
        cout<<"peso:";
        cin>>peso;
        f1.setPeso(peso);
        miArreglo[i]=f1;
    }
    f1.ordenaPesoAsc(miArreglo,lon);
    for(int i=0;i<lon;i++)
    cout<<"fruta: "<<miArreglo[i].getFruta()<<",peso:"<<miArreglo[i].getPeso()<<endl;
    delete [] miArreglo;
    return 0;
}

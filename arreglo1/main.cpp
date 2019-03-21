#include <iostream>
using namespace std;
class arreglos{
private:
	int tamano;
public:
	int getTamano();
	void setTamano();
	int buscarElemento(int,int []);
	void ordenarVectorAscendente(int []);
	void ordenarVectorDescendente(int []);
	void setElementosVector(int []);
	void getElementosVector(int []);
};

int arreglos::getTamano()
{return tamano;}

void arreglos::setTamano()
{cout<<"Escribe el tamano del vector:";
 cin>>tamano;}

void arreglos::setElementosVector(int v[])
{ 
   for(int i=0;i<getTamano();i++)
    {cout<<"vector["<<i<<"]:";
     cin>>v[i];}
     cout<<"\n";
}

void arreglos::getElementosVector(int v[])
{
  for(int i=0;i<getTamano();i++)
      cout<<"vector["<<i<<"]:"<<v[i]<<endl;
}

void arreglos::ordenarVectorDescendente(int v[])
{
	int auxiliar;
	for(int i=0;i<getTamano()-1;i++)
	{
		for(int j=0;j<getTamano()-1;j++)
		{
			if (v[j]<v[j+1])
			{auxiliar=v[j];
			 v[j]=v[j+1];
			 v[j+1]=auxiliar;}
		}
	}
}
void arreglos::ordenarVectorAscendente(int v[])
{
	int auxiliar;
	for(int i=0;i<getTamano()-1;i++)
	{
		for(int j=0;j<getTamano()-1;j++)
		{
			if (v[j]>v[j+1])
			{auxiliar=v[j];
			 v[j]=v[j+1];
			 v[j+1]=auxiliar;}
		}
	}
}

int arreglos::buscarElemento(int elemento, int v[])
{
	int pos=-1;
	for(int i=0;i<getTamano();i++)
	  {
	  	if (elemento==v[i])
	  	   {
	  	   	pos=i;
	  	   	break;
		   }
	  }
	  return pos;
}

int main(int argc, char** argv) {
	int elemento;
	arreglos v1;
	v1.setTamano();
	int arreglo[v1.getTamano()];
	v1.setElementosVector(arreglo);
	v1.ordenarVectorAscendente(arreglo);
	v1.getElementosVector(arreglo);
	v1.ordenarVectorDescendente(arreglo);
	v1.getElementosVector(arreglo);
	cout<<"Escribe el elemento a buscar:";
	cin>>elemento;
	cout<<"El elemento esta en la posicion:"<<
	v1.buscarElemento(elemento,arreglo);
	return 0;
}

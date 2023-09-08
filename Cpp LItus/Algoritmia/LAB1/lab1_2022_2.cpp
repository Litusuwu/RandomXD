#include <cmath>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
#include <cstring>

struct Canales{
	int numero;
	string nombre;
	double inversion;
	double roas;
	int recordacion;	
};

void llenarCanales(ifstream &arch,struct Canales *agencia,int cantidad)
{
	int i=0;
	while(1)
	{
		arch>>agencia[i].numero;
		if(arch.eof())break;
		arch>>agencia[i].nombre>>agencia[i].inversion>>agencia[i].roas>>agencia[i].recordacion;
		arch.get();
		i++;
	}
}

double calcularIngresoMaximo(struct Canales *agencia,int cant)
{
	struct Canales Cmaximo;
	double maximo=0,ingreso;
	for(int i=0;i<cant;i++)
	{
		ingreso = agencia[i].roas*agencia[i].inversion;
		if(ingreso>=maximo)
		{
			maximo = ingreso;
			Cmaximo.inversion = agencia[i].inversion;
			Cmaximo.nombre=agencia[i].nombre;
			Cmaximo.numero=agencia[i].numero;
			Cmaximo.recordacion=agencia[i].recordacion;
			Cmaximo.roas = agencia[i].roas;
			
		}
	}
	
	cout<<"El maximo ingreso por ventas es de "<<maximo<<" dólares";
	ParteC(struct Canales * agencia,int cant,struct Canales *Cmaximo);
	
}
int main(){
	
	int presupuesto=5000,cantCanales=9;
	ifstream arch("lab2022_2.txt",ios::in);
	if(not arch.is_open())
	{
		cout<<"NO SE PUEDE ABRIR EL ARCHIVO "<<endl;
		exit(1);
	}
	double maximoIngreso;
	struct Canales agencia[cantCanales];
	llenarCanales(arch,agencia,cantCanales);
	
	maximoIngreso = calcularIngresoMaximo(agencia,cantCanales);
	
	
	
	
	
	 
	
	
	
	return 0;
}

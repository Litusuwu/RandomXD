#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

void CrearCromosoma(int num,int cromosoma[],int combinaciones)
{
	int aux,j=0;
	for(int i=0;i<combinaciones;i++)
	{
		cromosoma[i]=0;
	}
	
	while(num>0)
	{
		aux = num%2;
		num = num/2;
		cromosoma[j]=aux;
		j++;
	}
}

void OpcionB()
{
	int peso=23;
	int div_almacen=4;
	
	double peso_robot,contador=1;
	int cromosomaIA[div_almacen],cromosomaIB[div_almacen],cromosomaDA[div_almacen],cromosomaDB[div_almacen];
	int izquierda[div_almacen][2]={{7,9},{17,12},{14,11},{19,8}};
	int derecha[div_almacen][2]={{8,18},{6,17},{10,15},{12,11}};
	int combinaciones = pow(2,div_almacen);
	
	for(int k=0;k<combinaciones;k++)
	{
		CrearCromosoma(k,cromosomaDA,combinaciones);
		for(int l=0;l<combinaciones;l++)
		{
			CrearCromosoma(l,cromosomaDB,combinaciones);
			for(int j=0;j<combinaciones;j++)
			{
				CrearCromosoma(j,cromosomaIB,combinaciones);
				for(int i=0;i<combinaciones;i++)
				{
					CrearCromosoma(i,cromosomaIA,combinaciones);
					peso_robot=0;
					for(int p=0;p<div_almacen;p++)
					{
						if(cromosomaIA[p]==1) peso_robot += izquierda[p][0];
						if(cromosomaDA[p]==1) peso_robot += derecha[p][0];
						if(cromosomaIB[p]==1) peso_robot += izquierda[p][1];
						if(cromosomaDB[p]==1) peso_robot += derecha[p][1];
					}
					
					if(peso_robot==peso)
					{
						cout<<"Resultado "<<contador<<": ";
						
						for(int m=0;m<div_almacen;m++)
						{
							if(cromosomaDA[m]==1) cout<<derecha[m][0]<<"k ";
							if(cromosomaDB[m]==1) cout<<derecha[m][1]<<"k ";
							if(cromosomaIA[m]==1) cout<<izquierda[m][0]<<"k ";
							if(cromosomaIB[m]==1) cout<<izquierda[m][1]<<"k ";
						}
						cout<<setw(15)<<"Ubicaciones: ";
						
						for(int m=0;m<div_almacen;m++)
						{
							if(cromosomaDA[m]==1) cout<<"DA"<<m+1<<" ";
							if(cromosomaDB[m]==1) cout<<"DB"<<m+1<<" ";
							if(cromosomaIA[m]==1) cout<<"IA"<<m+1<<" ";
							if(cromosomaIB[m]==1) cout<<"IB"<<m+1<<" ";
						}
						cout<<endl;
						contador++;
					}
				}
			}
		}
	}
}


int main()
{
	OpcionB();
	//OpcionC();	
	return 0;
}

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void CrearCromosoma(int n,int cromosoma[],int longitud)
{
	int j=0,aux;
	for(int i=0;i<longitud;i++) cromosoma[i]=0;
	
	while(n>0){
		aux=n%2;
		n=n/2;
		cromosoma[j]=aux;
		j++;
	}
}
void ParteB()
{
	int N_controles=8, P_dolares=100000;
	int cromosoma[N_controles];
	int combinaciones = pow(2,N_controles);
	int Inversion[N_controles]={32000,8000,40000,40000,20000,4000,16000,16000};
	int requisitos[N_controles][3]={{0,0,0},{0,0,0},{1,2,0},{0,0,0},{0,0,0},{2,0,0},{6,0,0},{6,0,0}};
	int beneficios[N_controles]={60000,32000,120000,60000,32000,20000,48000,60000};
	int montoadicional[N_controles]{};
	int inversionTotal,beneficio,mayorBeneficio=0,mejorcombi;
	//EN ESTE PROBLEMA SE PIDE ENCONTRA SE TE PIDE ENCONTRAR LA SOLUCION CON MAYOR BENEFICIO TENIENDO EN CUENTA LA SOLUCION DE LA PARTE A
	//encuentro el monto adicional por implementar requisitos
		for(int i=0;i<N_controles;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(requisitos[i][j]!=0)
				{
					montoadicional[i] += requisitos[i][j];
				}
			}
		}
		
		//ahora puedo usar la inversion, el monto adicional por requisitos, y los beneficios todos relacionados con el número de control
		for(int i=0;i<combinaciones;i++)
		{
			CrearCromosoma(i,cromosoma,N_controles);
			inversionTotal=0;
			for(int j=0;j<N_controles;j++)
			{
				if(cromosoma[j]==1)
				{
					inversionTotal += Inversion[j]+ montoadicional[j];
					beneficio += beneficios[j];
				}
			}
			
			if(inversionTotal==P_dolares)
			{
				if(mayorBeneficio<beneficio)
				{
					mayorBeneficio = beneficio;
					mejorcombi = i;
				}
			}
		}
		
		CrearCromosoma(mejorcombi,cromosoma,N_controles);
		cout<<"Se obtiene el mayor beneficio con la siguiente solucion: "<<endl;
		for(int k=0;k<N_controles;k++)
		{
			if(cromosoma[k]==1)
			{
				cout<<k+1<<" ";
			}
		}
		cout<<endl;
	
}
void ParteA()
{
		int N_controles=8, P_dolares=100000;
		int cromosoma[N_controles];
		int combinaciones = pow(2,N_controles);
		int Inversion[N_controles]={32000,8000,40000,40000,20000,4000,16000,16000};
		int requisitos[N_controles][3]={{0,0,0},{0,0,0},{1,2,0},{0,0,0},{0,0,0},{2,0,0},{6,0,0},{6,0,0}};
		int beneficios[N_controles]={60000,32000,120000,60000,32000,20000,48000,60000};
		int montoadicional[N_controles]{};
		int inversionTotal;
		//EN ESTE PROBLEMA SE PIDE ENCONTRA LA SOLUCION OPTIMA DONDE LA INVERSION DE LOS CONTROLES SEA IGUAL AL PRESUPUESTO
		
		//encuentro el monto adicional por implementar requisitos
		for(int i=0;i<N_controles;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(requisitos[i][j]!=0)
				{
					montoadicional[i] += requisitos[i][j];
				}
			}
		}
		
		//ahora puedo usar la inversion, el monto adicional por requisitos, y los beneficios todos relacionados con el número de control
		for(int i=0;i<combinaciones;i++)
		{
			CrearCromosoma(i,cromosoma,N_controles);
			inversionTotal=0;
			for(int j=0;j<N_controles;j++)
			{
				if(cromosoma[j]==1) inversionTotal += Inversion[j]+ montoadicional[j];
			}
			
			if(inversionTotal==P_dolares)
			{
				cout<<"Controles seleccionados: ";
				for(int k=0;k<N_controles;k++)
				{
					if(cromosoma[k]==1)
					{
						//muestro el control 
						cout<<k+1<<" ";
					}
				}
				cout<<endl;
			}
		}
			
		
}
int main()
{
	//Quite el // para mostrar la parte A
	//ParteA();
	ParteB();
}

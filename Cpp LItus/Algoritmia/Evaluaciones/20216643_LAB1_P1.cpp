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

void solucionA()
{
	int peso=100,n=4;
	int respuestaV[n*n],respuestaP[n*n];
	int cromosoma[n*n];//0 para cuando no tiene ese valor y 1 para cuando si tiene ese valor
	int combinacion=pow(2,n*n);
	int PesosyValores[n*n][2]={{20,10},{20,10},{20,10},{20,50},
						{10,80},{30,10},{10,10},{30,20},
						{10,20},{10,20},{10,20},{10,20},
						{15,50},{15,50},{15,50},{15,50}}; // 0 es peso y 1 es valores son 16 en total
	int mejorcombinacion,contador,contadoranterior;
	int ALMACENPESOS[n][n]{},ALMACENVALORES[n][n]{};
	int valorMaximo=0,pesosSelecc,valorSelecc;
	//EN ESTE EJERCICIO TE PIDEN MOSTRAR EL VALOR MAXIMO DE LOS CONTENEDORES SELECCIONADOS Y MOSTRAR EN UNA
	//MATRIZ LOS PESOS Y EN OTRA LOS VALORES SELECCIONADOS
	for(int i=0;i<combinacion;i++)
	{
		CrearCromosoma(i,cromosoma,n*n);
		//tengo los pesos y valores selecionados 
			pesosSelecc=0;
			valorSelecc=0;
			for(int j=0;j<n*n;j++)
			{
				//leer cromosoma y separar por 4
				if(cromosoma[j]==1)
				{
					pesosSelecc += PesosyValores[j][0];
					valorSelecc += PesosyValores[j][1];
				}	
			}
			
			if(pesosSelecc<=peso)
			{
				// los pesos elegidos no desbordan 
				if(valorMaximo<valorSelecc)
				{
					//guardamos a la combinacion con m�ximo valor
					valorMaximo=valorSelecc;
					mejorcombinacion = i;
				}
			}	
	}
	
	CrearCromosoma(mejorcombinacion,cromosoma,n*n);
	contador=0;
	for(int i=0;i<n*n;i++)
	{
		//divido el cromsoma en filas
		if(i%n!=0)
		{
			if(cromosoma[i]==1)
			{
				
				ALMACENVALORES[contador][i%n] = PesosyValores[i][1];
				ALMACENPESOS[contador][i%n] = PesosyValores[i][0];
			}
		}else
		{
			contador++;
			if(cromosoma[i]==1)
			{
				ALMACENVALORES[contador][i%n] = PesosyValores[i][1];
				ALMACENPESOS[contador][i%n] = PesosyValores[i][0];
			}
		}
	}
	
	
	//Ya tengo las matrices respuesta, solo falta mostrar
	
	cout<<"Valor Maximo: "<<valorMaximo<<endl;
	cout<<setw(15)<<"PESOS: ";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<ALMACENPESOS[i][j]<<" ";
		}
	}
	cout<<endl;
	cout<<setw(15)<<"VALORES: ";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<ALMACENVALORES[i][j]<<" ";
		}
	}
	cout<<endl;
}
int main(){
	solucionA();

	return 0;
}

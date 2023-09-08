#include <iostream>
#include <cmath>

using namespace std;

void cargarCromosoma(int numero,int cromosoma[],int logitud_cromosoma)
{
    int aux,i;
    for(int j=0;j<logitud_cromosoma;j++)
    {
        cromosoma[j]=0;
    }

    i=0;
    while(numero>0)
    {
		aux=numero%2;
        numero = numero/2;
        
        cromosoma[i]=aux;
        i++;
    }
}

int main(){
	int N;

    cin>>N;

    int M;
    cin>>M;

    int toneladas;
    cin>>toneladas;

    //cada bahia tiene N productos
    int bahias[3][N];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>bahias[i][j];
        }
    }

    int cromosoma1[N];
	int cromosoma2[N];
	int cromosoma3[N];

    int cant_probabilidades = pow(2,N);
    int peso_camion,contador;
   

    for(int i=0;i<cant_probabilidades;i++)
    {
    	
        for(int j=0;j<cant_probabilidades;j++)
        {
			
        	for(int k=0;k<cant_probabilidades;k++)
        	{
				cargarCromosoma(i,cromosoma1,N);
        		cargarCromosoma(j,cromosoma2,N);
        		cargarCromosoma(k,cromosoma3,N);
        		peso_camion=0;
        		contador=0;

        		for(int p=0;p<N;p++)
        		{
        			if(cromosoma1[p]==1)
        			{
        				peso_camion+=bahias[0][p];
        				contador++;
					}
				}

                
				for(int p=0;p<N;p++)
        		{
        			if(cromosoma2[p]==1)
        			{
        				peso_camion+=bahias[1][p];
        				contador++;
					}
				}
				
				for(int p=0;p<N;p++)
        		{
        			if(cromosoma3[p]==1)
        			{
        				peso_camion+=bahias[2][p];
        				contador++;
					}
				}
				//Hasta aqu� se tiene el peso de las combinaciones
				
				if(peso_camion==toneladas and contador==5)
				{
					cout<<"Bahia 1: ";
					for(int i=0;i<N;i++)
					{
						if(cromosoma1[i]==1) cout<<bahias[0][i]<<" ";
					}
					cout<<endl;
					cout<<"Bahia 2: ";
					for(int i=0;i<N;i++)
					{
						if(cromosoma2[i]==1) cout<<bahias[1][i]<<" ";
					}
					cout<<endl;
					cout<<"Bahia 3: ";
					for(int i=0;i<N;i++)
					{
						if(cromosoma3[i]==1) cout<<bahias[2][i]<<" ";
					}
					cout<<endl;
				}
			}
		}
    }
	return 0;
}
    



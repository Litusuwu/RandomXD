#include <iostream>
using namespace std;
//declaramos long long porque las combinaciones exceden a lo pedido
typedef long long ll;
/*Lo que se realizara aqui sera iniciar la inicializacion de variables y haremos todas las combinaciones posibles empleando fuerza bruta para poder dar con la combinacion que reuna los requisitos necesasrios 
descritos por el problema para poder dar con la solucion, iniciando con una matriz de controles que almacene los valores monetarios y otra que almacene los requisitos la cual delimitamos por 3 valores 
por dato del problema, luego empleamos una logica combinada con cromosomas pero empleando los operadores << y >> los cuales vienen por defecto en el C++ llamado manipulacion de bits* y culminaremos imprimiendo
los datos que nos piden los cuales son imprimir las solcuiones con los controles respectivos sin datos adicionales*/
void preguntaA(){
	//Declaramos las variables
	int N=8, P=100000, controles[N][3]={{1, 32000, 60000}, {2, 8000, 32000}, {3, 40000, 120000},
										{4, 40000, 60000}, {5, 20000, 32000}, {6, 4000, 20000},
										{7, 16000, 60000},{8, 16000, 60000}};
	int requisitos[8][3]={{0, 0, 0},{0, 0, 0}, {1, 2, 0},
					      {0, 0, 0}, {0, 0, 0}, {2, 0 ,0},
						  {6, 0, 0}, {6, 0, 0}};
	//Inicializamos todas las variables
	int beneficioFinal=0, costoFinal=0, num, contador=1;
	int estaDentro[8]{};
	ll cantComb, combinacionRespuesta;
	// cantComb -> 1<<N -> es lo mismo que pow (2, N) pero por manipulacion de bits
	cantComb=(1<<N);
	//como cada numero mantiene una combinacion de bits, no hace falta en este caso realizar un cromosoma para dar con la solucion
	for(ll combinaciones = 0 ; combinaciones < cantComb ; combinaciones++){
		//Inicializamos las variables a actualizar
		int banderaRequisitos=1;
		int costo=0, beneficio=0;
		//Iniciamos la busqueda si hay un bit encendido o apagado (bit : 01) ->> 0001010101010
		for(int bit = 0 ; bit < N ; bit++){
			//si esta encendido entonces realizar la suma del costo y del beneficio, tambien verificar si esta dentro o no mediante un arreglo, para relizar su siguiente validacion
			if((1<<bit)&combinaciones){
				costo+=controles[bit][1];
				beneficio+=controles[bit][2];
				estaDentro[bit]=1;
			}
			else{
				//actualizar si esta dentor o no el numero en la combinacion, para uso posterior
				estaDentro[bit]=0;
			}
		}
		//realizamos una segunda vuelta para verificar si est� o no
		for(int bit = 0 ; bit < N ; bit++){
			if((1<<bit) & combinaciones){
				//si est�, ahora confirmamos con un bucle de hasta 3 numeros ( dato de problema), si esta como requisito o no, para alzar una bandera de verificacion
				for(int k = 0 ; k < 3 ; k++){
					num=requisitos[bit][k]-1;
					if((estaDentro[num]==0) and requisitos[bit][k]!=0){
						//si no tiene los requisitos, salir d ela funcion
						banderaRequisitos=0;
						break;
					}
				}
			}
		}	
		//validar si todos los rquisitos se cumplen y si esta dentro del presupuesto
		if( banderaRequisitos==1 and costo==P and beneficio>0){
			beneficioFinal=beneficio;
			costoFinal=costo;
			combinacionRespuesta=combinaciones;
			//imprimir
			cout<<"RESPUESTA #"<<contador<<": "<<endl<<endl;
			
			for(int bit = 0 ; bit < N ; bit++){
				if((1<<bit)&combinacionRespuesta){
					cout<<"Control: "<<controles[bit][0]<<" - Inversion : "<<controles[bit][1]<<" - Beneficio: "<<controles[bit][2]<<endl;
				}
			}
			//cout<<"CON UNA GANANCIA DE "<<beneficioFinal<<" USD - CON UN COSTO DE "<<costoFinal<<" USD"<<endl;
			contador++;
		}		
	}
	
	
}
/*Lo que se realizara aqui sera iniciar la inicializacion de variables y haremos todas las combinaciones posibles empleando fuerza bruta para poder dar con la combinacion que reuna los requisitos necesasrios 
descritos por el problema para poder dar con la solucion, iniciando con una matriz de controles que almacene los valores monetarios y otra que almacene los requisitos la cual delimitamos por 3 valores 
por dato del problema, luego empleamos una logica combinada con cromosomas pero empleando los operadores << y >> los cuales vienen por defecto en el C++ llamado manipulacion de bits* y culminaremos imprimiendo
los datos que nos piden los cuales son imprimir las solcuiones con los controles respectivos con datos adicionales*/
void preguntaB(){
	//Declaramos las variables
	int N=8, P=100000, controles[N][3]={{1, 32000, 60000}, {2, 8000, 32000}, {3, 40000, 120000},
										{4, 40000, 60000}, {5, 20000, 32000}, {6, 4000, 20000},
										{7, 16000, 60000},{8, 16000, 60000}};
	int requisitos[8][3]={{0, 0, 0},{0, 0, 0}, {1, 2, 0},
					      {0, 0, 0}, {0, 0, 0}, {2, 0 ,0},
						  {6, 0, 0}, {6, 0, 0}};
	//Inicializamos todas las variables
	int beneficioFinal=0, costoFinal=0, num, contador=1;
	int estaDentro[8]{};
	ll cantComb, combinacionRespuesta;
	// cantComb -> 1<<N -> es lo mismo que pow (2, N) pero por manipulacion de bits
	cantComb=(1<<N);
	for(ll combinaciones = 0 ; combinaciones < cantComb ; combinaciones++){
		
		int banderaRequisitos=1;
		int costo=0, beneficio=0;
		for(int bit = 0 ; bit < N ; bit++){
			if((1<<bit)&combinaciones){
				costo+=controles[bit][1];
				beneficio+=controles[bit][2];
				estaDentro[bit]=1;
			}
			else{
				estaDentro[bit]=0;
			}
		}
		for(int bit = 0 ; bit < N ; bit++){
			if((1<<bit) & combinaciones){
				for(int k = 0 ; k < 3 ; k++){
					num=requisitos[bit][k]-1;
					if((estaDentro[num]==0) and requisitos[bit][k]!=0){
						banderaRequisitos=0;
						break;
					}
				}
			}
		}	
		if( banderaRequisitos==1 and costo==P and beneficio >= beneficioFinal){
			beneficioFinal=beneficio;
			costoFinal=costo;
			combinacionRespuesta=combinaciones;
			cout<<"RESPUESTA #"<<contador<<": "<<endl<<endl;
			
			for(int bit = 0 ; bit < N ; bit++){
				if((1<<bit)&combinacionRespuesta){
					cout<<"Control: "<<controles[bit][0]<<" - Inversion : "<<controles[bit][1]<<" - Beneficio: "<<controles[bit][2]<<endl;
				}
			}
			cout<<"CON UNA GANANCIA DE "<<beneficioFinal<<" USD - CON UN COSTO DE "<<costoFinal<<" USD"<<endl;
			contador++;
		}		
	}
	
	cout<<endl<<"LA RESPUESTA ES COMPRAR LOS SIGUIENTES CONTROLES: "<<endl<<endl;
	
	for(int bit = 0 ; bit < N ; bit++){
		if((1<<bit)&combinacionRespuesta){
			cout<<"Control: "<<controles[bit][0]<<" - Inversion : "<<controles[bit][1]<<" - Beneficio: "<<controles[bit][2]<<endl;
		}
	}
	cout<<"CON UNA GANANCIA DE "<<beneficioFinal<<" USD - CON UN COSTO DE "<<costoFinal<<" USD"<<endl;
}
//desactivar o activar la pregunta para verificar los resultados
int main(){
//	preguntaB();
	preguntaA();
	return 0;
}

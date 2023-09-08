#include <iostream>
using namespace std;
typedef long long ll;

#define MAXCOL 10
#define MAXFIL 4
//inciializamos matriz
int m[4][2];
//declaramos movimientos a dar, izquierda derecha arriba abajo
void movimientos(){
	m[0][0]=-1; m[0][1]=0;
	m[1][0]=0 ; m[1][1]=-1;
	m[2][0]=1 ; m[2][1]=0;
	m[3][0]=0 ; m[3][1]=1;
}
//modulo para buscar letra EN CUALQUIER ORDEN con sus validaciones, voy a colocar un arreglo que vaya actualizando ida por ida y se ira actualizando conforme aparezcan las letras indicadas
int buscaLetra(char tablero[][MAXCOL], int i, int j, char palabra[], int n){
	int nfil, ncol, contador=3;
	char palabraCopia[3]={'H','S','O'}, c;
	if(!(tablero[i][j]==palabra[0] or tablero[i][j]==palabra[1] or tablero[i][j]==palabra[2]))return 0;
	else{
		c=tablero[i][j];
	}
	for(int k=0; k<4; k++){	
		char palabraCopia2[3]={'H','S','O'};
		for(int u = 0 ; u < 3 ; u++){
			if(c==palabraCopia2[u]){
				palabraCopia2[u]=0;
			}
		}
		nfil = i + m[k][0];
		ncol = j + m[k][1];
		int p;
		for(p=1; p<n ; p++){
			for(int z = 0 ; z < 3 ; z++){
				if(tablero[nfil][ncol]==palabraCopia2[z]){
					palabraCopia2[z]=0;
				}
			}
			if(nfil<0 or nfil>=MAXFIL or ncol<0 or ncol>=MAXCOL)break;
			if(!(tablero[nfil][ncol]==palabra[0] or tablero[nfil][ncol]==palabra[1] or tablero[nfil][ncol]==palabra[2]))break;
			if(palabraCopia2[0]==0 and palabraCopia2[1]==0 and palabraCopia2[2]==0){
				return 1;
			}
			nfil+=m[k][0];
			ncol+=m[k][1];
		}
	}
	return 0;
}
//buscamos la palabra que llama a la funcion anterior
void buscaPalabra(char tablero[][MAXCOL], char palabra[], int n){
	for(int i = 0 ; i < MAXFIL ; i++){
		for(int j = 0 ; j < MAXCOL ; j++){
			if(buscaLetra(tablero, i, j, palabra, n))cout<<"La palabra empieza en "<<i<<" "<<j<<endl;
		}
	}
}
//vamos a usar fuerza bruta al buscar todas las combinaciones posibles, declaramos la matriz que guarde pesos y otra matriz que guarde valores,
//luego verificaremos cada combinacion y si el cromosoma == 1 ((1<<bit & mask)) entonces a�adimos el valor del  dinero y el valor del peso, luego de la iteracion x
//desplazamos n bits a la derecha para dar con la siguiente combinacion e ir asi completando el cromosoma y adjuntandolo en su respectivo valor de la matriz
//luego culminamos realizando la impresion de los datos
void preguntaA(){
	int P=100, n=4, num, cantComb, pesoAns=0, dineroAns=0;
	ll combinacionRespuesta, cRCopia;
	int pesos[n][n]={{20, 20 ,20 ,20},{10, 30, 10, 30}, {10, 10, 10, 10}, {15 , 15, 15, 15}};
	int valores[n][n]={{10, 10 ,10 ,50},{80, 10, 10, 20}, {20, 20, 20, 20}, {50 , 50, 50, 50}};
	cantComb=(1<<(n*n));
	for(ll combinaciones = 0 ; combinaciones < cantComb ; combinaciones++){
		int valorDinero=0, valorPeso=0;
		ll combinacionesCopia=combinaciones;
		for(int k = 0 ; k < n; k++){
			for(int bit = 0 ; bit < n ; bit++){
				if((1<<bit)&combinacionesCopia){
					valorDinero +=valores[k][bit];
					valorPeso	+=pesos[k][bit];	
				}	
			}
			combinacionesCopia>>=n;
		}
		
		if(valorDinero>=dineroAns and valorPeso<=P){
			dineroAns=valorDinero;
			pesoAns=valorPeso;
			combinacionRespuesta=combinaciones;
		}	
	}
	cout<<"EL VALOR MAXIMO ES : "<<dineroAns<<" MILES DE DOLARES"<<endl;
	cout<<"EL PESO MAXIMO ES  : "<<pesoAns<<" TONALEADAS"<<endl<<endl;
	cRCopia=combinacionRespuesta;
	cout<<"MATRIZ DE PESOS : "<<endl<<endl;
	for(int k = 0 ; k < n; k++){
		for(int bit = 0 ; bit < n ; bit++){
			if((1<<bit)&cRCopia){
				cout<<pesos[k][bit]<<" ";
			}
			else{
				cout<<"0 ";	
			}	
		}
		cout<<endl;
		cRCopia>>=n;
	}
	cRCopia=combinacionRespuesta;
	cout<<endl<<endl<<"MATRIZ DE VALORES : "<<endl<<endl;
	for(int k = 0 ; k < n; k++){
		for(int bit = 0 ; bit < n ; bit++){
			if((1<<bit)&cRCopia){
				cout<<valores[k][bit]<<" ";
			}
			else{
				cout<<"0 ";	
			}	
		}
		cout<<endl;
		cRCopia>>=n;
	}	
}
//inicializamos las variables para tener el tablero y la palabra indicada, con el n indicando el numero de letras
/*vamos a realizar un metodo visto en clase de sopa de letras el cual mdoificamos con los mivmientos (4) dados como dato,
despues vamos a ver todas las combinaciones posibles hasta el n=3 y damos con el poder dar la reoslucion*/
void preguntaB(){
	int n=3;
	char palabra[]={'H', 'S', 'O'};
	char tablero[][MAXCOL]={{'H','C','H','B','Y','S','O','S','O','H'},
							{'S','C','S','S','Y','Q','O','S','Z','K'},
							{'O','P','N','Y','O','K','F','H','C','K'},
							{'O','B','N','I','Y','S','P','O','O','K'}};
	movimientos();
	buscaPalabra(tablero, palabra, n);
}
//desactivar o activar la pregunta para verificar los resultados
int main(){
	//preguntaA();
	preguntaB();
	return 0;
}

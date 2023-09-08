#include <iostream>
using namespace std;
const int m1=2;
const int n1=2;

int funcion(int matriz[][2], int x, int y, int n, int m){
    int a=-10000, b=-10000;
    if(x==n-1 and y==m-1)return matriz[x][y];
    
    if(x+1<=n-1){
        a = funcion(matriz, x+1, y, n, m) + matriz[x][y];
    } 
    if(y+1<=m-1){
        b = funcion(matriz, x, y+1, n, m) + matriz[x][y];
    } 

    return (a<b? b : a);
}

int main(){
    
    int  n=2,m=2;
	int matriz[][2]={{3,5},
				   {-2,4}};
    cout<<funcion(matriz, 0, 0, n, m);
}
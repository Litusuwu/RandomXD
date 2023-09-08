#include <iostream>
#define max 20
using namespace std;


void remolino(int alma[][max],int x, int y, int n, int m, bool *contador, int maxN, int maxM, long long &k){
    //cond
    //bool flag = true;
    
    //if(x>=n || y>=m)return;
    //if(x==n-1 && y==n-1) cout<< alma[x][y]<<endl;
    for(int i = y ; i < m-1  ; i++ ){

        k-=alma[x][i];
        cout<< alma[x][i]<<" ";
        if(k==0)return;
    } 
    
    for(int i = x ; i < n-1 ; i++){
        k-=alma[i][m-1];
        cout<<alma[i][m-1]<<" ";
        if(k==0)return;
    }
    
    for(int i=m-1 ; i>y ; i--){
        k-=alma[n-1][i];
        cout<<alma[n-1][i]<<" ";
        if(k==0)return;
    }
    
    for(int i = n-1 ; i > x ; i--){
        k-=alma[i][y];
        cout<<alma[i][y]<<" ";
        if(k==0)return;
    }
    

    remolino( alma, x+1, y+1, n-1, m-1, contador, maxN, maxM , k);
}

int main(){
    int cont=1, n=5, m=5;
    int alma[max][max];
    bool contador[(n*m)+1]{};
    int maxNum=n*m;
    long long numMax= ((maxNum*(maxNum+1))/2);
    contador[0]=true;
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            alma[i][j]=cont++;
        }
    }
    remolino(alma, 0, 0, n, m, contador, n, m, numMax);
    //if(n==m)cout<<alma[(n/2)][(m/2)];
    return 0;
}
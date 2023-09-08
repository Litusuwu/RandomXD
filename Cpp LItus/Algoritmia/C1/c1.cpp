#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
void imprimirArreglo(int a[10], int b){
    for(int i=0; i<b; i++)cout<<a[i]<<" ";
    cout<<endl;
}
void SelectSort(int a[10], int b){
    int min, aux;
    for(int i=0; i<b-1; i++){
        min= i;
        for(int j=i+1; j<b; j++){
            if(a[j]<a[min])min=j;
        }
        if(min!=i)swap(a[i], a[min]);
        cout<<i+1<<") ->>>   ";
        imprimirArreglo(a, b);

    }
}
void BubbleSort(int a[10], int b){

}
int main(){
    int arreglo[10]{89, 1, 18,100, 45 ,68 ,90, 29 ,34 ,17};
    int size = 10;
    imprimirArreglo(arreglo, size);
    SelectSort(arreglo, size);
    imprimirArreglo(arreglo, size);
    
    return 0;
}
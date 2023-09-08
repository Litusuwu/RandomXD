#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
void solve(){
    string hamburguesa;
    vector<int>ingredientes(3, 0), cantidad(3, 0), precio(3, 0);
    lar ans=0, monedas, c;
    cin>>hamburguesa;
    for(char i:hamburguesa){
        switch(i){
            case 'B':
                ingredientes[0]++;
                break;
            case 'C':
                ingredientes[1]++;
                break;
            case 'S':
                ingredientes[2]++;
                break;
        }
    }

    cin>>cantidad[0]>>cantidad[1]>>cantidad[2];
    cin>>precio[0]>>precio[1]>>precio[2]>>monedas;
    while(monedas>c){
        for(int i=0; i<3; i++){
            cantidad[i]-=ingredientes[i];
            while(cantidad[i]<=0 and monedas>precio[i]){
                monedas-=precio[i];
                cantidad[i]+=ingredientes[i];
            }
        }
        if(monedas>=0)ans++;
    }
    cout<<monedas;

}


int main()
{
	daysi;
    campos;

    solve();
	return 0;
}
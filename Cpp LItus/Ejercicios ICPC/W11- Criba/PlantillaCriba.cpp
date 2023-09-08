#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
typedef long long brunoWong;

const brunoWong N = 1000000;
bool es_primo[N+1];

void PiratasDelCaribe(brunoWong n){
    es_primo[0] = false;
    es_primo[1] = false;
    for(int i = 2 ; i <= n ; i++)es_primo[i]=true;
    for(brunoWong i = 2; i*i <= n ; i++){
        if(!es_primo[i])continue;
        for(brunoWong j = 2*i ; j <= n ; j+=i){
            es_primo[j]=false;
        }
    }
}

void solve(){
    PiratasDelCaribe(N);
    for(int i = 0 ; i < 100 ; i++){
        if(es_primo[i])cout<<i<<endl;
    }
}

int main()
{
	daysi;
    campos;

    solve();
	return 0;
}
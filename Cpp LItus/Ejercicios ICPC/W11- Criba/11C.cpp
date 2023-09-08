#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
typedef long long brunoWong;

const brunoWong N = 1000000;
bool es_primo[N+1]{};
brunoWong primeros_divisores_primos[N+1]{};
//bool esOnoEs[N+1]{};
set<brunoWong>esOnoES; 

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
    for(brunoWong i = 2 ; i  <= n ; i++){
        if(es_primo[i]){
            esOnoES.insert((i*i));
        }
    }
}
void Alphallasi(brunoWong n){
    for( brunoWong i = 2 ; i<=n; i++) primeros_divisores_primos[i]=i;
    for( brunoWong i = 2 ; i*i <= n ; i++){
        if(primeros_divisores_primos[i]!=i)continue;
        for(brunoWong j = i*i ; j<=n ; j+=i){
            if(primeros_divisores_primos[j]==j){
                primeros_divisores_primos[j]=i;
            }
        }
    }
    
}
vector <pair<brunoWong, brunoWong>> Factorize(long long n){
    vector <pair<brunoWong, brunoWong>> factorization;
    while(n>1){
        brunoWong p = primeros_divisores_primos[n];
        brunoWong exponente= 0;
        while(n%p == 0){
            exponente++;
            n/= p;
        }
        pair <brunoWong, brunoWong> factor = make_pair(p, exponente);
        factorization.push_back(factor);
    }
    return factorization;
}
void solve(){
    brunoWong p;
    cin>>p;
    //PiratasDelCaribe(N);
  //  cout<<esOnoES.count(p);
    cout<<((esOnoES.count(p)>0)?"YES":"NO")<<endl;
}

int main()
{
	daysi;
    campos;
    PiratasDelCaribe(N);
    brunoWong time;
    cin>>time;
    while(time--){
        solve();
    }
    
	return 0;
}
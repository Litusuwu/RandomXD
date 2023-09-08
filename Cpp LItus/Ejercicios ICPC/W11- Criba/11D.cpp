#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
typedef long long brunoWong;

const brunoWong N = 10000;
bool es_primo[N+1]{};
brunoWong primeros_divisores_primos[N+1]{};
set<brunoWong> sumRara;

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
    brunoWong n, k, contador=0, j=2;;
    
    //PiratasDelCaribe(N);
    cin>>n>>k;
    PiratasDelCaribe(N);
    for(brunoWong i = 3 ; i<=n; i++){
        if(es_primo[i] and es_primo[(i+j+1)] and i+j+1<=n){
            sumRara.insert(i+j+1);
            //cout<<i<<" "<<j<<" ";
            //cout<<i+j+1<<endl;
            j=i;
        }
        else if (es_primo[i])j=i;
    }
    cout<<((sumRara.size()>=k)? "YES":"NO");
    
}

int main()
{
	daysi;
    campos;
 //   PiratasDelCaribe(N);
    brunoWong time;
    time=1;
    //cin>>time;
    while(time--){
        solve();
    }
    
	return 0;
}
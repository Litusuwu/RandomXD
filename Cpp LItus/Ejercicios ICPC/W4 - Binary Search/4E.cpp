#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
void solve(){
    
    long long j=0, risky, sum=0, dor, lett, n;
    vector<long long>dormitorios,letras;
    cin>>dor>>lett;

    for(unsigned long int i=0; i<dor;i++){
        cin>>n;
        dormitorios.push_back(n);
    }
    for(unsigned long int i=0; i<lett;i++){
        cin>>n;
        letras.push_back(n);
    }
    for(unsigned long int i=0; i<dor; i++){
        risky=dormitorios[i]+sum;
        while(risky>=letras[j] and j<lett){
            cout<<(i+1)<<" "<<(letras[j]-sum)<<endl;
            j++;
        }
        sum+=dormitorios[i];
    }
}

int main()
{
	daysi;
    campos;

    solve();
	return 0;
}
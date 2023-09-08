#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
void solve(){
    int time, num, cant, f1, f2, contador=1;
    double ans;
    cin>>time;
    vector<int>pikachu;
    
    while(time--){
        cin>>num;
        pikachu.insert(upper_bound(pikachu.begin(), pikachu.end(), num), num);
        
        if(!(contador&1)){
            //ans=((pikachu[contador/2]+pikachu[contador/2-1])/2.0);
            printf("%.1lf\n",((pikachu[contador/2]+pikachu[contador/2-1])/2.0) );
            //cout<<((pikachu[contador/2]+pikachu[contador/2-1])/2.0)<<'\n';
        }
        else{
            printf("%.1lf\n",(pikachu[contador/2]/1.0) );
        } 
        
        contador++;
    }
}

int main()
{
	daysi;
    campos;
    /*cout.precision(1);
    cout<<fixed;*/
    solve();
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
void solve(){
    lar time, largo, ans, j=0, suma=0, contador=0, b, bmenor;
    cin>>time>>largo;
    vector<lar>pikachu; 
    queue<lar>raichu;
    
    if(largo==1){
        while(time--){
            cin>>b;
            cout<<b<<" ";
        }
    }
    else if(largo==2){
        for(int i=0;i<time;i++){
            int  n ; cin>> n;
            pikachu.push_back(n);
        }
        for(int i=1; i<time ;i++){
            cout<<min(pikachu[i], pikachu[i-1])<<" ";
        }
    }
    else{
        while(time--){
                cin>>b;
                pikachu.insert(upper_bound(pikachu.begin(), pikachu.end(), b), b);
                raichu.push(b);
                contador++;
                
                if(contador==largo){
                    cout<<pikachu[largo/2]<<" ";
                    auto it=find(pikachu.begin(), pikachu.end(), raichu.front());
                    pikachu.erase(it);
                    raichu.pop();
                    contador--;
                }
                
        }
    }
    
}   
int main()
{
	daysi;
    campos;

    solve();
	return 0;
}
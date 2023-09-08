#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
void solve(){
    string pikachu;
    cin>>pikachu;
    for(int i=0; i<pikachu.size(); i++){
        if(pikachu[i]=='{' and pikachu[i+1]=='}' 
            or pikachu[i]=='(' and pikachu[i+1]==')' 
                or pikachu[i]=='[' and pikachu[i+1]==']'){

                    pikachu.erase(i, 2);
                    if(i==0){
                        i--;
                    }
                    else{
                        i=i-2;
                    } 
        }
    }
    cout<<(pikachu.size()? "NO":"YES")<<endl;
}

int main()
{
	daysi;
    campos;

    int time;
    cin>>time;
    while(time--){
        solve(); 
    }
	return 0;
}
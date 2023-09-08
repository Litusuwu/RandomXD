#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
void solve(){
    int time, num, actio;
    multiset<int>cola;
    cin>>time;
    while(time--){
        cin>>actio;
        switch(actio){
            case 1:
                cin>>num;
                cola.insert(num);
                break;
            case 2:
                cin>>num;
                cola.erase(cola.find(num));
                break;
            case 3:
                cout<<(*cola.begin())<<'\n';
                break;
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
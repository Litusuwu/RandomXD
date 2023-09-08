#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
#define hemorragia tree < int ,  null_type ,  less ,  rb_tree_tag ,  tree_order_statistics_node_update >
void solve(){
    lar time, largo, ans, j=0, suma=0, contador=0, b;
    cin>>time>>largo;
    map<int, int>pikachu; 
    vector<lar>raichu(time);
    for(int i=0; i<time;i++){
        cin>>raichu[i];
    }
    for(int i=0; i<time; i++){
        pikachu.insert(pair<int,int>(raichu[i],i));
        if(contador==largo){
            
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
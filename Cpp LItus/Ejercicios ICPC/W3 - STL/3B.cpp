#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, m, numero, a, iter, max,ans=0 ;
    cin>>n>>m;
    queue<int>cola, colaNum;
    vector<int>vectorsito;
    for(int i=0; i<n; i++){
        cin>>numero;
        cola.push(numero);
        colaNum.push(i);
        if(i==m)iter=numero;
        vectorsito.push_back(numero);
    }
    sort(vectorsito.begin(), vectorsito.end());
    while(true){
        
        a=cola.front();
        max=*max_element(vectorsito.begin(), vectorsito.end());
        if(colaNum.front()==m and max==iter){
            ans++;
            break;
        }
        if(a<max){
            cola.pop();
            cola.push(a);
            a=colaNum.front();
            colaNum.push(a);
            colaNum.pop();
        }
        else if(a==max){
            ans++;
            cola.pop();
            colaNum.pop();
            vectorsito.pop_back();
        }    
    }
    cout<<ans<<endl; 
}
int main(){
    int time;
    cin>>time;
    while(time--){
        solve();
    }
    return 0;
}
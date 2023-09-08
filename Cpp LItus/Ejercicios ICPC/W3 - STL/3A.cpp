#include <bits/stdc++.h>
using namespace std;

void solve(){
    queue<int>s1, s2, s3;
    vector<int>sumas(3, 0);
    int n1, n2, n3, numero;
    
    cin>>n1>>n2>>n3;
    
    for(int i=0; i<n1; i++){
        cin>>numero;
        s1.push(numero);
        sumas[0]+=numero;
    }
    for(int i=0; i<n2; i++){
        cin>>numero;
        s2.push(numero);
        sumas[1]+=numero;
    }
    for(int i=0; i<n3; i++){
        cin>>numero;
        s3.push(numero);
        sumas[2]+=numero;
    }

    while(sumas[1]!=sumas[0] or sumas[1]!=sumas[2] or sumas[2]!=sumas[0]){
        
        if(sumas[0]>=sumas[1] and sumas[0]>=sumas[2]){
            numero=s1.front();
            s1.pop();
            sumas[0]-=numero;
            
        }
        else if(sumas[1]>=sumas[0] and sumas[1]>=sumas[2]){
            numero=s2.front();
            s2.pop();
            sumas[1]-=numero;
        }
        else if(sumas[2]>=sumas[1] and sumas[2]>=sumas[0]){
            numero=s3.front();
            s3.pop();
            sumas[2]-=numero;
        } 
    }
    cout<<sumas[0];
}

int main(){
    
    solve();

    return 0;
}
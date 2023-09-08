#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
#define limite 1000000000LL 
int suma(lar num){
    lar suma=0;
    while(num>0){
        suma+=(num%10);
        num/=10;
    }
    return suma;
}
lar expo(lar num2, lar a){
    lar num=num2;
    for(lar i=0; i<a-1; i++){
        num2*=num;
    }
    return num2;
}
void solve(){
    lar a, b, c, ans2;
    vector<lar>pikachu;
    cin>>a>>b>>c;    
    
    for(lar i=1; i<81; i++){
        lar ans3 = b * expo(i, a) + c;
        if(ans3<1000000000LL and i==suma(ans3)){
            pikachu.push_back(ans3);
        }
        cout<<endl;
    }
    cout<<pikachu.size()<<endl;
    for(int i=0; i<pikachu.size(); i++)cout<<pikachu[i]<<" ";
}

int main()
{
	daysi;
    campos;

    solve();
	return 0;
}
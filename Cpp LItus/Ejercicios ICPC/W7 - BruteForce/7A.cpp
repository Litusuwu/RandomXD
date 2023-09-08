#include <bits/stdc++.h>
using namespace std;
#define daysi ios::sync_with_stdio(false)
#define campos cin.tie(0)
#define lar long long
bool verificarLucky(int num){
    int dig;
    while(num!=0){
        dig=num%10;
        num/=10;
        if(dig!=7 and dig!=4){
            return false;
        }
    }
    return true;
}

void solve(){
    long long n, nc, num=1;
    int dig;
    bool flag=true, flag2=true;
    cin>>n;
    nc=n;
    if(verificarLucky(nc))flag2=false;
    while(num<nc){
        if(verificarLucky(num)){
            if(nc%num==0)flag2=false;
        }
        num++;
    }

    if(flag2==false)cout<<"YES";
    else cout<<"NO";
   // flag2=(nc%7==0 or nc%4==0)? true:false;
    
 //   cout<<((flag==true or flag2==true)? "YES":"NO");
}

int main()
{
	daysi;
    campos;

    solve();
	return 0;
}
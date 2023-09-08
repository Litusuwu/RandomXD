#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n,b=0;

	cin>>n;
	
	if(n==0){
		cout<<1<<'\n';
		return 0;
	}

	while(n>0){
		int last=n&1;
		if(last==0){
			b++;
		}
		n>>=1;
	}
	cout<<(1LL<<b)<<'\n';
	return 0;
}
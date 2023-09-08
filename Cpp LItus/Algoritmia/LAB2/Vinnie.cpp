#include<iostream>
using namespace std;

void patron(int n, int i){
    if(n==2){
        for(int j=0;j<i;j++) cout<<" ";
        cout<<"*"<<endl;
        for(int j=0;j<i;j++) cout<<" ";
        cout<<"**"<<endl;
        for(int j=0;j<=i;j++) cout<<" ";
        cout<<"*"<<endl;
        return;
    }
    patron(n/2,i);
    for(int j=0;j<i;j++) cout<<" ";
    for(int j=0;j<n;j++) cout<<"*";
    cout<<"\n";
    patron(n/2,i+n/2);
}

int main(){

    patron(8,0);
    return 0;
}
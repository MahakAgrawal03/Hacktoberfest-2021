#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
ll digit_sum(ll n){
    ll total=0;
    while(n){
        total+=n%10;
        n/=10;
    }
    return total;
}
 
void solve(){
    ll n,count;
    cin>>n;
    {
    	for(int j=2;j*j<n+1;j++)
        if((__gcd(n,digit_sum(n)))%j==0){
            count++;
        }
         if(count==2){		 
            cout<<"mja AaGya Beedu"<<endl;
            return ;
            }
        else{
            cout<<"SaLa Nahi hua kya M mar jau :D"<<endl;
            return ;
    }
    //n++;
  }
} 
 int main(){
 	int t;
 	cin>>t;
 while(t--){
 		solve();
	 }
 }

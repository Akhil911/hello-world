#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007 
map<long long, long long> Fibo;

long long f(long long n) {
	if (Fibo.count(n)){	
	  return Fibo[n];
	}
	long long k=n/2;
	if (n%2==0) { 
		return Fibo[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % mod;
	} else { 
		return Fibo[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % mod;
	}
}

int main() {
	int t;
	long long n;
	cin>>t;
	Fibo[0]=Fibo[1]=1;
	while(t--){
		cin>>n;
		cout << (n==0 ? 0 : f(n+1)) << endl;
	}
	return 0;
}

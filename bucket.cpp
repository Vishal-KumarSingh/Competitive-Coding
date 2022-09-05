#include<iostream>
#include<bits/stdc++.h>
using namespace std;
unsigned long long int bin(unsigned long long int n){
	unsigned long long int i;
	for (i= 2; i < 10000000000000000000; i=i*2)
	{
		if(n % i  ==0){
		   return  i/2;	
		}else{
			n -= n % i;
		}
	}
}
int main(){
	unsigned long long int tc,n;
	cin >> tc;
	while(tc--){
	   cin >> n;
	   cout << bin(n) << endl;
	}
}

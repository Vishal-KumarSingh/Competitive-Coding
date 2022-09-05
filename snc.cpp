#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>	
using namespace std;

  int quartic(long long int n){
	 int answer=0;
	for(int i=0; i<=18; i++){
		answer += pow( n % 10 , 4 );
		n = n / 10 ;
		if(n==0){
			return answer;
		}
	}
	return answer;
}
int product(long long int n){
	 int answer=1;
	for(int i=0; i<=18; i++){
		answer *= n % 10;
		n=n/10;
		if(n==0){
			return answer;
		}
	}
	return answer;
}
int main(){
	int tc,w;
	long int count=0;
	long long int  n;
	cin >> tc;
	while(tc--){
		cin >> n;
	    count = 0;
	    for(long long int i=2; i<=n;i++){
	    w  = product(i);
	    if(w==0){
	    	if(quartic(i) > 1){
	    		count++;
			}
   	     }else{  
	    if(__gcd(quartic(i), w) != 1){
	    	count++;
		}
	    }
	}
	cout << count << endl;
	}
}


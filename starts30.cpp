#include <iostream>
using namespace std;
int main(){
	
	long long int tc,c,x,y;
	cin >> tc;
	while(tc--){
		
		cin >> x >> y;
		x = (y * x );
		if(x%2 == 1){
			x++;
		}
		cout << x/2 << endl;
	}
	
	
	
	
	
	
	
}

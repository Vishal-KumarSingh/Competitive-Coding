#include<iostream>
using namespace std;
bool ask(int x, int y){
	string s;
	cout << "? "<< x << " "<< y;
	fflush(stdout);
	cin >> s;
	if(s == "YES"){
		return true;
	}else{
		return false;
	}
	
}

int main() {
	int triangle_h;
	int base_x, base_x_t,area;
	bool base_cnf = true,tri_cnf=true,h_cnf=true;
	for(int i=0; i<100; i++){
	
		if(base_cnf){	
	        if(ask(i,0)){
	        	base_x = i;
			}else{
				base_cnf = false;
			}
		}else{
			if(tri_cnf){
			 if(ask(i,base_x)){
	        	base_x_t = i;
			}else{
				tri_cnf = false;
			}
		  }
		  
		if(h_cnf){
		  if(ask(i,0)){
		  	triangle_h = i;
		  }else{
		  	h_cnf = false;
		  }
		}
	}
	}
		
		
		base_x *= 2;
		
		area = base_x * base_x;
		area +=  (base_x-triangle_h) * (base_x_t);
		cout << "! "<< area;
	
		fflush(stdout);
	
	
	
}

#include<iostream>
using namespace std;
int main(){
    long int tc,n,minimum=10000000,temp;
	scanf("%ld", &tc);
	while(tc--){
	   scanf("%ld", &n);
	   minimum = 10000000;
	    long int arr[n];
	   for( long int i=0; i<n ; ++i)
	   {
	   	scanf("%ld", &arr[i]);
	   }
	   for( long int i=0;i<n;++i){
	   	
	   	   for( long int j=i+1;j<n;++j){
	   	   	    
	   	   	    temp = arr[i] * (1+j) - (i+1) * arr[j];
	   	   	    if(temp < 0){
	   	   	    	temp *= (-1);
				 }
	   	   	     if(temp < minimum){
	   	   	     	minimum = temp;
				}	   	    
	   	   	    
			  }
	   }
	   printf("%d\n" , minimum);
}
}

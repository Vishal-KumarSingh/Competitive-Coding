#include<iostream>
using namespace std;
int main(){
    long int tc,n,minimum=10000000,temp,count;
    long int prob1,prob2;
    long int index,lt;
     cin >> tc;
	while(tc--){
	   cin >> n;
	   char a[n] , b[n];
	   prob1=0;prob2=0;
	   count=0;
	   index = 0;
	   lt=0;
	   for(long int i=0;i<n;i++){
	   	   cin >> a[i];
	   	   if( a[i] == '1'){
	   	   	     count++;
			  }
	   }
	    for(long int i=0;i<n;i++){
	   	   cin >> b[i];
	   	   if( b[i] == '1'){
	   	   	     count--;
			  }
	   }
	 if(count % 2 == 0){	 
	   for(long int i=0; i<n;i++){
	   	   if(a[i] != b[i]){
	   	   	    if(a[i] == '1'){
	   	   	    	  if(lt==1){
							index = 1;
						}
	   	   	    	    prob1++;
	   	   	    	    lt=-1;
					}else{
						if(lt==-1){
							index = 1;
						}
						prob2++;
						lt=1;
					}
			  }else{
			  	lt=0;
			  }
	   }
	   lt = prob1/2 + prob2/2;
	   //cout << lt << endl;
	   if(prob1%2==1){
	   	 if(index==0){			
	   	  lt+=2;
	   }else{
	   
	   	  lt+=1;
	   }
	   }
	   //cout << prob1 << "   " << prob2 << "  " << index;
	   cout << lt << endl;
   } else{
   	   cout << -1 << endl;
   }
}

}

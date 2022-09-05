 for( long long int i=0;i<n;i++){
	   	
	   	   for( long long int j=i+1;j<n;j++){
	   	   	    
	   	   	    temp = arr[i] * (j+1) - (i+1) * arr[j];
	   	   	    if(temp < 0){
	   	   	    	temp = temp * (-1);
				 }
	   	   	     if(temp < minimum){
	   	   	     	minimum = temp;
				}	   	    
	   	   	    
			  }
	   }

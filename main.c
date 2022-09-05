#include<stdio.h>

int main(){
	int arr[5] = {1,2,3,4,5};
	int i =0;
	for(i=0;i<5;){
		printf("%d  %u \n" , arr[i] , &arr[i]);
		i=i+1;
	}
	return 0;
}

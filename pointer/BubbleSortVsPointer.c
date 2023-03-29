#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main(){
	
	int *ary;
	int n,i,j;
	int temp;
	printf("\nNhap so pt Array: ");
	scanf("%d", &n);
	ary =(int*)malloc(n*sizeof(int));
	
	for(i = 0; i< n; i++){
		scanf("%d",ary+i);//scanf("%d",&ary[i]);
	}
	
	for(i = 0; i< n; i++){
		for(j = i+1; j<n; j++){
			if(*(ary +j) < *(ary +i)){
				temp = *(ary +i);
				*(ary+i)  = *(ary+j);
				*(ary+j) = temp;
			} 
		}
	}
	printf("\nDs Array sau khi sap xep: ");
	for(i =0; i<n; i++){
		printf("\n%d",*(ary+i));//printf("%d",ary[i]);
	}
	
	return 0;
}
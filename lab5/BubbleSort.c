#include <stdio.h>
#include <stdlib.h>
int main(){
	int ary[6] ={12,6,22,14,8,17};
	int i, j, temp;
	//Vong lap dem so phan tu da duoc sap xep 
	for(i=0; i<6; ++i){
		//Vong lap cho moi phan tu chua sap xep
		for(j=0; j<6-i-1; ++j){
			if(ary[j] > ary[j+1]){
				temp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = temp;
			}
		}
	}
	printf("\n\nCac phan tu mang sau khi da sap xep: ");
	for(i =0; i<6; i++){
		printf("%d ", ary[i]);
	}
	
	return 0;
}
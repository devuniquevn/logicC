#include <stdio.h>
int main(){
	int n = 5;
	int ary[5] ={20,10,5,1,99};
	int i;
//Khi truyen 1 mang vao cho Ham. Thi chi co dia chi cua Mang duoc truyen vao
//Truyen Tham chieu => truyen dia chi cua bien or Mang 
	sortArry(n,&ary[0]);//Noi goi Ham	
	for(i = 0; i< n; i++){
		printf("%d ", *(ary+i));
	}
	return 0;
}
void sortArry(int n, int ptr[]){
	int i,j,temp;
//	//sort1
//	for(i= 0; i<n; i++){
//		for(j = i+1; j < n ; j++){
//			if(*(ptr + j) < *(ptr+i)){
//				temp =1 *(ptr+i);
//				*(ptr + i) = *(ptr + j);
//				*(ptr + j) = temp;
//			}
//		}
//	}
//sort 2
	for(i = 0; i< n-1; i++){
		for(j =0; j< n-i-1; j++){
			if(ptr[j] > ptr[j+1]){
				swapFunction(&ptr[j],&ptr[j+1]);
			}
		}
	}
}

swapFunction(int *p1, int *p2){
	
	int temp; 
	temp = *p1; 
	*p1 = *p2; 
	*p2 = temp;
}

 float searchByValue(){
 	//local in the function
 	
 }

















#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main(){
	
	int *ptr;
	int n;
	printf("\nBan muon luu tru bao nhieu pt Array: ");
	scanf("%d",&n);//n=3
	ptr =(int*)malloc(n*sizeof(int));//Ham cap phat bo nho dong
	
	printf("\nCap phat bo nho thanh cong!");
	
	for(i =0; i< n; ++i){
		ptr[i] = i+1000;//ghan gia tri cho pt mang
		//*(ptr+i) = i+1;
	}
	printf("\nGia tri cu moi phan tu Array la: ");
	for(i = 0; i<n; i++){
		printf("%d, ",ptr[i]);
	}
	
	printf("\nDia chi cua Array cach 1: ");
	for(i = 0; i<n; i++){
		printf("%d, ",ptr+i);
	}
		printf("\nDia chi cua Array cach 2 ");
	for(i = 0; i<n; i++){
		printf("%d, ",&ptr[i]);
	}
	return 0;
}
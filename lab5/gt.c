#include <stdio.h>
int main(){
	int n, giaithua =1;
	printf("\nNhap vao 1 so nguyen duong: ");
	scanf("%d",&n);
	
	int tmp = n; 
	do{
		giaithua *=n;//giaithua = giaithua * n;
		n--;
	}while(n>1);
	
	printf("\nGiai thua cua %d la: %d ",tmp,giaithua);
	
	return 0;
}
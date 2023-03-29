#include <stdio.h>
int main(){
	int n, thuong, sodu;
	int mangSoDu[100];//khai bao 100 bien. Mang []
	//mangSoDu[0], mangSoDu[1]...mangSoDu[99]
	int dem = 0;
	printf("\nNhap vao 1 so nguyen trong khoang 0-31: ");
	scanf("%d", &n);
	
	do{
		sodu = n%2;
		thuong = n/2;
		mangSoDu[dem] = sodu;
		n = thuong;//so n moi sau phep chia
		++dem;
		
	}while(thuong!=0);
	//In ra theo chieu nguoc lai 
	for(int i = dem -1; i>=0; --i){
		printf("%d",mangSoDu[i]);
		
	}
	return 0;
}
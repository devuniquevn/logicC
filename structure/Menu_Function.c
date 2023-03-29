#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void tinhTongHaiSo(int x, int y);

int main(){
	int a,b,ch; 
	char choice;
	printf("\nNhap vao 2 so bat ky: ");
	scanf("%d %d", &a,&b);
	do{
		printf("\n\tPHEP TINH");
		printf("\n1. + ");
		printf("\n2. - ");
		printf("\n3. * ");
		printf("\n4. / ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				tinhTongHaiSo(a,b);
				break;
			case 2:
				printf("\nHieu: %d",a - b);
				break;
			case 3:
				printf("\nTong: %d",a*b);
				break;
			case 4:
				if(b==0){
					printf("\nKhong chia cho so =0!!!");
				}else{
					printf("\nTong: %f",a/b);
				}
				break;
			default:
				printf("\nBan phai chon 1-4!!!") ;
		}

		printf("\nBan co muon tiep tuc khong? (y/n)");
		fflush(stdin);
		scanf("%c",&choice);
	}while(choice == 'y');
	
	printf("\nThank you!");
	return 0;
}

void tinhTongHaiSo(int x, int y){
		int tong; 
		tong = x + y;
		printf("\nTong hai so la: %d",tong);
	}
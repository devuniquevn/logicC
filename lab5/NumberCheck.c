#include <stdio.h>
#include <stdlib.h>
int main(){
	char ch;
	do{
		printf("\nNhap 1 ky tu: ");
		scanf("%c",&ch);//ch = getchar();
		fflush(stdin);//xoa vung nho dem(chi dung ky tu)
		if(ch>='a'&& ch<='z' || ch >='A' && ch <= 'Z'){
			printf("\nBan vua nhap chu cai!");
			
		}else if(ch >='0' && ch <= '9')
		{
			printf("\nBan vua nhap so");
		}else{
			printf("\nKy tu dac biet");
		}
		
	}while(ch!=' ' && ch!='\t' && ch!='\n');
	printf("\nBan vua nhap ky tu trang! Stop program!");
	return 0;
}
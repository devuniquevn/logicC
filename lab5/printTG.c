#include <stdio.h>
int main(){
	int height, i,j;
	do{
		printf("\nNhap vao chieu cao cua tam giac(height>2): ");
		scanf("%d", &height);
		
	}while(height < 2);
	for(i = 1; i <= height; ++i )
	{
		for(j = 1; j<=i; ++j )
		{
				printf("%c",'*');
		}
		printf("\n");	
	}
	return 0;
}
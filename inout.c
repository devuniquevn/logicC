#include <stdio.h>
#include <math.h>
#include <string.h>
//HDH trao quyền đk cho hàm main
int main()
{	
	int a;//%d
	long int b;//%d
	float x;//%f
	double z;//%lf
	char ch; //%c
/*	//input
	scanf("%d %f %lf %c",&a,&x,&z,&ch);//& toan tu dia chi
	ch = getchar();//nhap 1 ky tu 
	//output
	printf("%d %f %lf %c",a,x,z,ch);
	printf("\n%s","Hello world!");
	putchar(ch);//in 1 ky tu*/
	
	//String 
	char name[20];//Mang ky tu aka String 
	printf("\nNhap ten cua ban: ");
	gets(name);
	printf("\nTen vua nhap: ");
	puts(name);
	
	
	
	
	
	
	return 0;
}

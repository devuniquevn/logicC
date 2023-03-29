#include<stdio.h>
int add(int *a, int *b);//Khai bao Ham 
int main(){//Ham goi 
	
	int total; 
	int n1,n2;
	n1=2; 
	n2=5;
	//Truyen Gia tri vao cho Ham duoc goi
	total = add(&n1,&n2);//Goi Ham => Ket qua se tra ve noi goi ham
	printf("\nResult: %d", total);
	printf("\nGia tri n1: %d, n2: %d", n1, n2);

}
//Ham duoc goi
int add(int *a, int *b){//Trien khai Ham => viet code cho Ham do 
	int result; 
	int temp;
	temp = *a; 
	*a = *b; 
	*b = temp;
	
	result = *a + *b; 
	return result; 
}
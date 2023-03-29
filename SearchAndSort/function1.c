#include<stdio.h>
int add(int a, int b);//Khai bao Ham 
int main(){
	
	int total; 
	int n1,n2;
	n1=2; 
	n2=5;
	//Truyen Gia tri vao cho Ham duoc goi
	total = add(n1,n2);//Goi Ham => Ket qua se tra ve noi goi ham
	printf("\nResult: %d", total);

}
int add(int a, int b){//Trien khai Ham => viet code cho Ham do 
	int result; 
	a = 100; 
	b= 200;
	result = a + b; 
	return result; 
}
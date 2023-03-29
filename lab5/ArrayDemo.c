#include <stdio.h>
int main(){
	//khai bao Array
	int marks[10] ={10,9,7,9,3,2,4,6,2,6};
	//marks[0] -> marks[9]
	//dataType arrayName [arraySize];
	marks[8] = 20;

	
	int i, sum; 
	float avg;
	
	printf("\nNhap diem cho 10 sv: ");
	for(i = 0; i < 10; i++){
		scanf("%d",&marks[i]);
	}
	sum =0;
	for(i =0; i<10; i++){
		sum = sum + marks[i];//0+1+2 + marks[3]
	}
	avg = (float)sum/10;
	printf("Average marks = %f", avg);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>//thu vien cho cap phat bo nho dong
//Function => Hàm để chia nhỏ chương trình ra thành nhiều phần nhỏ hơn 
//Phân rã chương trình 
//=> Dễ code, dễ sửa lỗi, dễ bảo trì, dễ đọc => Phải dùng.
void menu(); 
void initArray(){
	printf("\nInit Arry");
}
void findMax(){
	printf("\nSo Max la: ");
}
void findMin(){
	printf("\nSo Min la: ");
}
void sortAsc(){
	printf("\nSap xep ASC: ");
}
void sortDesc(){
	printf("\nSap xep DESC: ");
}
void finByValue(){
	//return 0;
}

void main(){
	menu();
	
}

void menu(){
	int ch;
	while(1){
		printf("\t\tFunctions\n");
		printf("\n1. Init Arry");
		printf("\n2. findMax");
		printf("\n3. findMin");
		printf("\n4. sortAsc");
		printf("\n5. sortDesc");
		printf("\n6. findByValue");
		printf("\n7. Exit");
		printf("\nEnter your choice: ");
		scanf("\n %d",&ch);
		
		switch(ch){
			case 1: initArray();
				break;
			case 2: findMax();
				break;
			case 3: findMin();
				break;
			case 4: sortAsc();//chỉ có đc của mảng được truyền vào
				break;
			case 5: sortDesc();
				break;
			case 6: finByValue();
				break;
			case 7: 
				exit(0);
		}
	}
	
}


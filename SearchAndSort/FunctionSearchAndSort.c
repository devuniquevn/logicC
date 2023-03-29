//Binary Search 
#include<stdio.h>
int c;//Global variable

void inputData(){
	int c,n, array[100];//Local variable
      printf(" How many numbers you want to enter?: ");
      scanf("%d",&n);
      printf("\n Enter %d numbers: \n\n  ", n);
      for (c = 0; c < n; c++)
            scanf("%d",&array[c]);
}
void sortArray(){
	
	 int c,n, array[100],t,i,j;
      printf(" How many numbers you want to enter?: ");
      scanf("%d",&n);
      printf("\n Enter %d numbers: \n\n  ", n);
      for (c = 0; c < n; c++)
            scanf("%d",&array[c]);
      //Bubble sort start
      for (i = 0; i < n; i++)
      {
            for (j = 0; j < (n - i - 1); j++)
            {
                  if (array[j] > array[j + 1])
                  {
                        t = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = t;
                  }
            }
      }
    
 
}
void binarySearch(){
	int  first, last, middle, n, search, array[100],t,i,j;
	printf("\n\nEnter number to be searched: ");
      scanf("%d", &search);
      // Binary search begins
      first = 0;
      last = n - 1;
      middle = (first+last)/2;
      while(first <= last){
      	if(array[middle] < search){
      		first = middle +1;
		  }
      	else if(array[middle] == search) {
      		printf("\n%d found at location %d. ", search, middle+1);
      		break;
		  }
      	else
      		last = middle -1;
      		
      	middle = (first + last)/2;
	  }
	  if(first > last ){
	  	printf("\nNot found!!!");
	  }
}
void displayData(){
	int i, c,n, array[100];
	  printf("\nSorted array is : \n\n");
      for (i = 0; i < n; i++)
      {
            printf("%d ", array[i]);
      }
}
void menu(){
	int ch;
	while(1){
		printf("\n\t\tFunctions");
		printf("\n1. InputData");
		printf("\n2. Sort Array");
		printf("\n3. Search");
		printf("\n4. Display data");
		printf("\n5. Exit");
		printf("\nEnter your choice: ");
		scanf("%d ", &ch);
		
		switch(ch){
			case 1: 
			break;
			case 2: break;
			case 3: break;
			case 4: break;
			case 5: exit(0);
		}
		
	}
}
int main()
{  
	menu();
	return 0;
}
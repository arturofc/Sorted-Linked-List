#include <stdio.h>

#include <string.h>
#include "sorted-list.h"


int compareDouble(void *A1, void* A2){
	double* n1 = (double*)A1;
	double* n2 = (double*)A2;

	if (*n1<*n2){
		return -1;
	} else if (*n1>*n2){
		return 1;
	} else {
		return 0;
	}
}

int compareInt(void *A1, void* A2){
	int* n1= (int*)A1;
	int* n2= (int*)A2;

	if(*n1 < *n2){
		return -1;
	}else if(*n1 > *n2){
		return 1;
	}else{
		return 0;
	}

}

void destroyDouble(void* ptr){
	free(ptr);
}

int compareString(void *A1, void* A2){
	char* n1=(char*)A1;
	char* n2=(char*)A2;

	return strcmp(n1,n2);

}


void compareStruct(void *A1, void* A2){
	
}



int main(){

	//numbers
	
	SortedListPtr example = SLCreate(compareInt,destroyDouble);
	void *temp;
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	 num1=32;
	 num2=21;
	 num3=60;
	 num4=13;
	 num5=100;
	 num6=25;
	
	SLInsert(example,&num1);
	SLInsert(example,&num2);
	SLInsert(example,&num3);
	SLInsert(example,&num4);
	SLInsert(example,&num5);
	SLInsert(example,&num6);
	
	SortedListIteratorPtr iterate = SLCreateIterator(example);
	printf("Original user input is: \n%d\n%d\n%d\n%d\n%d\n%d\n", num1, num2, num3, num4, num5, num6);
	printf("\n");
	temp = SLGetItem(iterate);
	printf("Sorted Output is: \n");
	while (temp != NULL){
		printf("%i\n", *(int*)temp);
		temp = SLNextItem(iterate);
	}

	printf("\n");	
	//doubles
	
	SortedListPtr example2 = SLCreate(compareDouble,destroyDouble);
	void *temp2;
	double double1;
	double double2;
	double double3;
	double double4;
	double double5;
	double double6;


	 double1= 0.5;
	 double2= 0.7;
	 double3= 0.0;
	 double4= 0;
	 double5= 3.1415;
	 double6= 1.75;
	
	SLInsert(example2,&double1);
	SLInsert(example2,&double2);
	SLInsert(example2,&double3);
	SLInsert(example2,&double4);
	SLInsert(example2,&double5);
	SLInsert(example2,&double6);

	SortedListIteratorPtr iterate2 = SLCreateIterator(example2);
	printf("Original user input is: \n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n", double1, double2, double3, double4, double5, double6);
	printf("\n");

	temp2 = SLGetItem(iterate2);
	printf("Sorted Output is: \n");
	while (temp2 != NULL){

		printf("%lf\n", *(double*)temp2);
		temp2 = SLNextItem(iterate2);
	}
	
	printf("\n");
	void* temp3;
	void* ptr = &double1; 
	printf("User Chose to remove: %lf\n", double1);
	SLRemove(example2, ptr);
	
	SortedListIteratorPtr iterate3 = SLCreateIterator(example2);
	temp3 = SLGetItem(iterate3);
	printf("Updated List after remove: \n");
	while (temp3 != NULL){
		printf("%lf\n", *(double*)temp3);
		temp3 = SLNextItem(iterate3);
	}
	printf("\n");

	//strings
	
	SortedListPtr example3 = SLCreate(compareString,destroyDouble);
	void *temp4;
	char *string1;
	char *string2;
	char *string3;
	char *string4;
	char *string5;
	char *string6;

	string1 = "fox";
	string2 = "jumped";
	string3 = "over";
	string4 = "lazy";
	string5 = "doggy";
	string6 = "FOX";
	
	SLInsert(example3,string1);
	SLInsert(example3,string2);
	SLInsert(example3,string3);
	SLInsert(example3,string4);
	SLInsert(example3,string5);
	SLInsert(example3,string6);

	printf("Orignal User Input is:\n%s\n%s\n%s\n%s\n%s\n%s\n",string1, string2, string3, string4, string5, string6 );
	SortedListIteratorPtr iterate4 = SLCreateIterator(example3);

	printf("\n");

	temp4= SLGetItem(iterate4);
	printf("Updated List after remove: \n");
	while (temp4 != NULL){
		printf("%s\n", (char*)temp4);
		temp4=SLNextItem(iterate4);
	}
	printf("\n");

	SLDestroy(example3);
	SLDestroy(example2);
	SLDestroy(example);

	return 0;
}



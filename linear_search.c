#include<stdio.h>
#include<stdlib.h>


int main() {

	int length = 6;

	int i, num;

	int arr[] = {23, 37, 43, 55, 0, -12};

	for (int i = 0; i < 6; i++) {
		printf("%d  ", arr[i]);
	}

	printf("\nEnter the item to be searched: ");
	scanf("%d", &num);
	
	for (i = 0; i < length && arr[i] != num; i++);
	
	if (i == length) {
		printf("Element Not Found...\n");
	} else {
		printf("Found At Position %d...\n", i + 1);
	}


	printf("\n");
	
	return 0;
}



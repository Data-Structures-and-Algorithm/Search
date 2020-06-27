#include<stdint.h>
#include<stdlib.h>
#include<stdio.h>

int bin_search(int *a, int size, int num);

int main(void) 
{
	int a[] = {-1, 0, 2, 3, 8, 10, 19, 128};
	
	int num;
	
	for (size_t i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		printf("%d ", a[i]);
	}

	printf("\nEnter the element to be searched : ");
	
	scanf("%d", &num);

	int pos = bin_search(a, sizeof(a) / sizeof(a[0]), num);
	
	if (pos < 0) {
		printf("Element not found\n");
	}

	else {
		printf("Element found at %d\n", pos);
	}
	return 0;
}


int bin_search(int *a, int size, int num)
{
	int start, end, mid;

	start = 0;
	end = size - 1;
	
	while (start <= end) {
		mid = (start + end) / 2;
		if (a[mid] == num) {
			return mid;
		}
		if (num < a[mid]) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return -1;
	
}













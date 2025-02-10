#include <stdio.h>
#include "statistics.h"
#include "output_array.h"

int main(){
	int array1[] = {10,20,30,40,50};
	int size1 = sizeof(array1)/sizeof(array1[0]);
	
	int array2[] = {1,3,5,7,9,11,13,15};
	int size2 = sizeof(array2)/sizeof(array2[0]);

	int array3[] = {10,100,1000,10000};
	int size3 = sizeof(array3)/sizeof(array3[0]);

	printf("for Array 1:\n");
	print_array(array1, size1);
	printf("sum: %.2f\n", cal_sum(array1, size1));
    	printf("average: %.2f\n", cal_average(array1, size1));
    	printf("standard deviation: %.2f\n", cal_std_deviation(array1, size1));
    	printf("max: %d\n", findmax(array1, size1));
    	printf("min: %d\n", findmin(array1, size1));
    	printf("absolute difference: %d\n\n", differenceabs(findmax(array1, size1), findmin(array1, size1)));

	printf("for Array 2:\n");
    	print_array(array2, size2);
    	printf("sum: %.2f\n", cal_sum(array2, size2));
    	printf("average: %.2f\n", cal_average(array2, size2));
   	printf("standard deviation: %.2f\n", cal_std_deviation(array2, size2));
    	printf("max: %d\n", findmax(array2, size2));
    	printf("min: %d\n", findmin(array2, size2));
    	printf("absolute difference: %d\n\n", differenceabs(findmax(array2, size2), findmin(array2, size2)));
    
    	printf("for array 3:\n");
    	print_array(array3, size3);
    	printf("sum: %.2f\n", cal_sum(array3, size3));
    	printf("average: %.2f\n", cal_average(array3, size3));
    	printf("standard seviation: %.2f\n", cal_std_deviation(array3, size3));
    	printf("max: %d\n", findmax(array3, size3));
	printf("min: %d\n", findmin(array3, size3));
    	printf("absolute sifference: %d\n\n", differenceabs(findmax(array3, size3), findmin(array3, size3)));
    
    	return 0;
}

#define _GNU_SOURCE
#include <math.h>
#include <stdio.h>
#include "statistics.h"

double cal_sum(int arr[], int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
	sum += arr[i];
        }
	return sum;
}
double cal_average(int arr[], int size) {
	double sum = cal_sum(arr, size);
	return sum / size;
}
double cal_std_deviation(int arr[], int size) {
	double avg = cal_average(arr, size);
	double squares = 0;
	for (int i = 0; i < size; i++) {
		squares +=pow(arr[i] - avg, 2);
        }
	return sqrt(squares/size);
}

int findmax(int arr[], int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
		max = arr[i];
		}
	}
	return max;
}

int findmin(int arr[], int size){
	int min = arr[0];
	for (int i = 1; i < size; i++){
		if (arr[i] < min ){
			min = arr[i];
		}
	}
	return min;
}

int differenceabs(int max, int min) {
	return max - min;
}


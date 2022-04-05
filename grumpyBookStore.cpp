#include <stdio.h>
#include <stdlib.h>

int maxSatisfied(int* customers, int customersSize, int* grumpy, int grumpySize, int minutes){

    int sum = 0;
    
    for(int i = 0; i < sizeof(customers); i++) {
        if (grumpy[i] == 0) {
            sum += customers[i];
        }
    }
    
    int maxSum = sum;
    for(int i=0; i< minutes; i++) {
        if(grumpy[i] == 1) {
            sum += customers[i];
        }
    }
    if(sum > maxSum) {
        maxSum = sum;
    }
    int j = minutes;
    int i = 0;
    while(j < sizeof(customers)){
            if(grumpy[j] == 1){
                sum += customers[j];
            }
            if(grumpy[i] == 1){
                sum -= customers[i];
            }
            if(sum > maxSum){
                maxSum = sum;
            }
            j++;
            i++;
        }
        return maxSum;
}

int main() {
	int customers[] = {1,0,1,2,1,1,7,5};
	int grumpy[] = {0,1,0,1,0,1,0,1};
	int minutes = 3;
	int output = maxSatisfied(customers, sizeof(customers), grumpy, sizeof(grumpy), minutes);
	printf("output: %d\n", output);
	return 0;
}



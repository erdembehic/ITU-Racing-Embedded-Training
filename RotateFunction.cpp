//Author 
//ITU Racing Embedded Team 2022

#include <stdio.h> 
int maxRotateFunction(int *nums, int numsSize){
    int buyukarr[numsSize],add=0,gecici,maxvalue;
    for(int i=0; i < numsSize; i++){
        for(int j=0; j<numsSize; j++){
           add += j*nums[j];
        }
        buyukarr[i] = add;
        add=0;
        for(int k = numsSize-1; k>0 ;k--){
            gecici = nums[k-1];
            nums[k-1]=nums[k];
            nums[k] = gecici;
        }
    }
    maxvalue = buyukarr[0];
    for(int l=0; l<numsSize;l++){
        if(buyukarr[l]> maxvalue){
            maxvalue = buyukarr[l];
        }
    }
    return maxvalue;
}


int main() 
{ 
    int size, d; 
    printf("input size of array "); 
    scanf("%d",&size); 
    int nums[size]; 
    printf("\ninput elements of array  "); 
    for(int i=0;i<size;i++){ 
        scanf("%d",&nums[i]); 
    } 
    printf("\nThe array  is "); 
    for(int i=0;i<size;i++){ 
        printf("%d ",nums[i]); 
    }
    
    d = maxRotateFunction(nums,size);
    printf("%d",d);
    return 0; 
} 

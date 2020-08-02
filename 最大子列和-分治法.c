#include<stdio.h>

int main(void)             
{
   int *nums,numsSize,i;
   printf("Enter your arraySize:\n");
   scanf("%d",&numsSize);
   nums=(int*)malloc(numSize*sizeof(int));
   printf("Enter your array:\n");
   for(i=0;i<numSize;i++)
   {
      scanf("%d",&nums[i]);
   }
   maxSubArray(int* nums, int numsSize);
   
   return 0; 
}

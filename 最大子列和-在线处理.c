#include<stdio.h>
int maxSubArray(int* nums, int numsSize){
    int i,max=0,now=0;
    
    for(i=0;i<numsSize;i++)
    {
        now+=nums[i];  //向右累加
        if(now>max)
           max=now;    //发现更大的和则更新当前结果
        else if(now<0)   //如果当前子列和为负，则不可能使后面部分和增大，抛弃
           now=0;
        
    }
    return max;
}
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

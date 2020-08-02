#include<stdio.h>
int maxSubArray(int* nums, int numsSize){
    int i,j,max=nums[0],now;      

    for(i=0;i<numsSize;i++)     //外层循环将数组每个数循环一遍
    {
        now=0;                  //初始化目前子列和为0
        for(j=i;j<numsSize;j++)  内层循环从外层循环第一个数开始到数组最后一个数结束
        {
            now+=nums[j];        //求当前子列和，依次累加后面一个数
            if(now>max)
             max=now;           //若当前子列和大于最大值，则更新最大子列和为当前值
        }
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

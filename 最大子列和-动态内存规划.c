#include<stdio.h>
#include<stdlib.h>
#define Max(a, b) (a > b) ? a : b;
int maxSubArray(int* nums, int numsSize){
    int i,dp[numsSize],maxSum=nums[0];
    if(numsSize==0||numsSize==1)             //若numsSize 为1或0，直接返回数组的第一个值
      return nums[0];
    else
       {
           dp[0]=nums[0];                //dp[i]储存以numsSize[i]为结尾的最大子列和
          for(i=1;i<numsSize;i++)
          {
              dp[i]=Max((dp[i-1]+nums[i]),nums[i]);       //dp[i]为dp[i-1]+nums[i])和nums[i]中的较大值
              maxSum=Max(maxSum,dp[i]);                     //最大子列和为数组dp中的最大值
          }
       }
       return maxSum;
}

int main(void)             
{
   int *nums,numsSize,i;
   printf("Enter your arraySize:\n");
   scanf("%d",&numsSize);
   nums=(int*)malloc(numsSize*sizeof(int));
   printf("Enter your array:\n");
   for(i=0;i<numsSize;i++)
   {
      scanf("%d",&nums[i]);
   }
   printf("%d\n",maxSubArray(nums, numsSize));
   
   return 0; 
}

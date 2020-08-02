#include<stdio.h>                                                                                            /*思路:取数组中心为中点
                                                                                                                     最大子序和要么全在中点左边，要么全在右边，要么跨中心
                                                                                                                     分三种情况考虑
                                                                                                                     跨中心的情况，
                                                                                                                      再分成求中心左侧和右侧最大子序和的问题，用贪心算法*/
#include<stdlib.h>
#define Max(a,b) (a>b)?a:b; 
int maxSubArray(int* nums, int numsSize){
    int max_left=0,max_right=0,max_center=0,tempt=0,i;

    if(numsSize==0||numsSize==1)              //结束条件：数组中的值只剩一个或没有
    {
        return nums[0];
    }
    else
    {
        max_left=maxSubArray(&nums[0],(numsSize-1)/2);                  //递归求左支最大值
        max_right=maxSubArray(&nums[(numsSize+1)/2],(numsSize-1)/2);    //递归求右支最大值
    }
    tempt=nums[(numsSize-1)/2];
     for(i=(numsSize-1)/2;i>0;i--)                          //贪心法求靠中心左侧的最大序列和
    {
        tempt+=nums[i];
        if(max_center<tempt)
          max_center=tempt;
    }
    tempt=max_center;
    for(i=(numsSize+1)/2;i<numsSize;i++)                    //求靠近中心右侧的最大序列和并加上靠中心左侧的最大序列和
        {
            tempt+=nums[i];
            if(max_center<tempt)
            max_center=tempt;
        }
    return Max(Max(max_left,max_right),max_center);         //比较左支最大值，右支最大值，跨中心最大值，求出整个数组中的最大子序列和
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
   printf("%d\n",maxSubArray(int* nums, int numsSize));
   
   return 0; 
}

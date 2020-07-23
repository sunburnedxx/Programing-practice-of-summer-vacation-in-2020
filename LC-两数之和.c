void twoSum(int* nums, int numsSize, int target){
    int i,j,returnedValue[2];
     if((int*)malloc(numsSize*sizeof(int))==NULL)
     {
         printf("Fail to allocate memory\n");
         exit(1);
     }
     printf("Enter %d integers:\n",numsSize);
     for(i=0;i<numsSize;i++)
     {
         scanf("%d",&nums[i]);
     }
     for(i=0;i<numsSize-1;i++)
     {
         for(j=i+1;j<numsSize;j++)
         {
             if(nums[i]+nums[j]==target)
               break;
         }
     }
     free(nums);

     printf("[%d,%d]",i,j);
}
#include<stdio.h>
int main(void)
{
    int* nums,numsSize,target;
    printf("Enter the size of array and the target:\n");
    scanf("%d%d",&numsSize,&target);
    twoSum(nums,numsSize,target);

return 0;
}
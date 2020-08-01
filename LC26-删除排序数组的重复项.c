int removeDuplicates(int* nums, int numsSize){
    int count=0,i;              //设置循环变量i，count记录数组中不同值的个数
    for(i=0;i<numsSize;i++)      //将数组从头到尾循环一遍
    {
        if(nums[count]!=nums[i])  //若nums[i]!=nums[count],将不同值nums[i]写入nums[count],count后移一位
          nums[++count]=nums[i];
    }
    return count+1;   //循环结束，数组中所有的不同值都找出，个数为count+1(count 初始值为0)，存在数组nums[count]中
}

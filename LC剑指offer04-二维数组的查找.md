### 题目链接：https://leetcode-cn.com/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof/
### 代码：
        _Bool findNumberIn2DArray(int** matrix, int m, int n, int target){
        int i,j;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(matrix[i][j]==target)
                    return true;
            }
        }
        return false;
        }

        #include<stdio.h>
        #include <stdlib.h>
        int main(void)
        {
            int m,n,i,j,target,**matrix;
        printf("Enter the row-number and col-number of your array:\n");
        scanf("%d%d",&m,&n);
        matrix = (int**)malloc(sizeof(int*)*m);//为二维数组分配m行 
            for (i = 0; i < m; ++i){//为每列分配n个大小空间 
                matrix[i] = (int*)malloc(sizeof(int)*n); 
        printf("Enter your array(%dx%d)",m,n);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }
        _Bool findNumberIn2DArray(int** matrix, int m, int n, int target);

        return 0;
        }
//打印九九乘法口诀表
#include <stdio.h>
int main() 
{
    int i, j;
    for (i = 1; i <= 9; i++) 
    {
        for (j = 1; j <= 9; j++) 
        {
            if (j < i)
                printf("\t");
            else
                printf("%d*%d=%d\t", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
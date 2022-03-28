//输入正整数n，输出n以内的全部素数，并输出n以内所有素数个数
#include<stdio.h>
int judge(int n)
{
   if(n==1)
   {
       return 0;
   }
   else if(n==2)
   {
       return 1;
   }
    else
    {
        int i;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int m,i,n=0,num=0;
    scanf("%d",&n);
    /*********Begin*********/
    for(i=1;i<=n;i++)
    {
        int a = judge(i);
        if(a==1)
        {
            printf("%d,",i);
            num++;
        }
    }
    /*********End**********/ 
    printf("\n%d以内共有%d个素数\n",n,num);
    return 0;
}

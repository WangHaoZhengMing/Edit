// 马上要举办新生程序设计竞赛了，与以往不同的是，本次比赛以班为单位，为了全面衡量一个班级的整体水平
// 要求从一个班的m位同学中任选k位同学代表本班参加比赛，问有多少种组合方案。显然，这个组合数是mi/(ki(m-k)i)。要求编写函数fact()，实现求一个数的阶乘功能，在主函数中调用此函数。
#include <stdio.h>
long fact(long n)
{
    long temp=n;
    for (int i = n-1; i >0; i--)
    {
    temp=temp*(i);
    }
   // printf("%ld\n",temp);
   return temp;
}


int main()
{
    long m, k;
    scanf("%ld %ld", &m, &k);
    long mi = fact(m);
    long ki = fact(k);
    long mki=fact(m-k);
    long h=mi/(ki*(mki));
    printf("%ld",h);
    return 0;
}
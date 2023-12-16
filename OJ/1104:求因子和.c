// 输入正整数n（2<=n<=1000），计算并输出n的所有正因子(包括1，不包括自身)之和。
//要求程序定义一个FacSum ()函数和一个main()函数，FacSum ()函数计算并返回n的所有正因子之和，其余功能在main()函数中实现。
#include <stdio.h> 
int FacSum(int n) 
{ 
    int a=0;
  for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            a=a+i;
        }
    }
//int arr[a+1];
// for (int v = 1; v <= n; v++) {
//         if (n % v == 0) {
//             arr[v]=v;
//         }
//     }
return a;
} 

int main ()
{
    int n;
    scanf("%d",&n);
    int cds =FacSum(n);
    printf("%d",cds);
    return 0;
}
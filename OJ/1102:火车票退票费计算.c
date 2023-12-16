// 票面乘车站开车时间前48小时以上的按票价5%计退票费
// 车票退票费的计算方法不再四舍五入到元为单位,而是以5角为单位:尾数小于0.25元的舍去,不小于0.25元且小于0.75元的计为0.5元,不小于0.75元的进为1元.
// 编写一个函数,计算退票费,假定退票时间距离开车时间在48小时以上.
// double CancelFee(double price);
#include <stdio.h>
double CancelFee(double price)
{
    double preFee = price * 0.05;
    int intfee = (int)preFee;
   double num = preFee - intfee;
    if (num < 0.25)
    {
        return intfee;
    }

    else if ((num >= 0.25 && num < 0.75))
    {
        return intfee + 0.5;
    }
    else
    {
        return intfee + 1;
    }
}

int main()
{
    double price;
    scanf("%lf", &price);
    double fee = CancelFee(price);
    printf("%.1lf", fee);
    return 0;
}






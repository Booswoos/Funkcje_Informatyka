#include "../funkcje.h"
#include <cmath>
#include <algorithm>
#include <iostream>


int HowDigits(int a)
{
    int x;
    x=abs(a);
return log10(x)+1;
}


double PointsDistance(double x1,double y1,double x2,double y2)
{
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}


double WeightedAverage(int a,int tab[],int tab2[])
{

    double tmp=0,result=0;
    for(int i=0;i<a;i++)
        {result+=tab[i]*tab2[i];
        tmp+=tab2[i];}

return result/tmp;
}


double Rectangle(double a,double ay,double b, double by,double c,double cy,double d,double dy)
{
    double x,y;
    x=PointsDistance(a,ay,b,by);
    y=PointsDistance(a,ay,c,cy);
    return x*y;
}
long long Power(double number, double how)
{
    long long result=1;
    for(int i=0;i<how;++i)
    {
        result*=number;
    }
    return result;
}

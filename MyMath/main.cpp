#include <iostream>
#include "../funkcje.h"
using namespace std;

int main()
{
/*
    int number;  // intiger number
    cin>>number;  // enter number (intiger) you want to know the number of digits
    cout<<HowDigits(number)<<endl;

    double px1,py1,px2,py2;   //points coordinates
    cin>>px1>>py1;  // enter coordinates of point (x,y)
    cin>>px2>>py2;  // enter coordinates of point (x,y)
    cout<<PointsDistance(px1,py1,px2,py2)<<endl;

    int a;  // number of grades
    cin>>a;  // specify how many grades you'll enter
    int* tab= new int[a];
    int* tab2= new int[a];
    for(int i=0;i<a;i++)
        cin>>tab[i]>>tab2[i];   // enter your grade and her weight
    cout.precision(2);
    cout<<WeightedAverage(a,tab,tab2)<<endl;

    double x1,y1,x2,y2,x3,y3,x4,y4;  // coordinates of rectangle apex
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;  //enter coordinates of apexes (x,y)
    cout<<Rectangle(x1,y1,x2,y2,x3,y3,x4,y4)<<endl;
*/
    double digit,how;  // number to powering and to which power
    cin>>digit>>how;  //enter the number which you want raising to a power and to which power
    cout<<Power(digit,how);
    return 0;
}

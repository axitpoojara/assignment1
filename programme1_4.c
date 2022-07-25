//4. WAP to find the area of the circle. Take radius of circle from user as input and print theresult in below given format.Expected output format – “Area of circle is A having the radius R”. Replace A with area& R with radius.//
#include<stdio.h>
int main()
{
    int r; float area;
    printf("Enter Radious Of Circle :");
    scanf("%d",&r);
    //formula to find area of circle(pi*r*r)//
    area=3.14*r*r;
    printf("Area Of circle is %f having the radius %d " ,area, r);
    return 0;
}
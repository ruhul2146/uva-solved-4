#include<stdio.h>
#include<math.h>
//we know that in hsc geometrical trigonometri a/sin(a)=b/sin(b)=c/sin(c)=2*R
//again triangle area S=1/2*a*b*sin(c)
// sin(c)=2*S/a*b
//therefore c/sin(c)=2R
// 2R=a*b*c/2*S
// 4R=a*b*c/S
//pi=3.141592653589793 or acos(-1)
int main()
{
    double x1,y1,x2,y2,x3,y3,sum,d1,d2,d3,R,S,cir;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF)
    {
        d1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        d2=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        d3=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        sum=(d1+d2+d3)/2;
        S=sqrt(sum*(sum-d1)*(sum-d2)*(sum-d3));
        R=(d1*d2*d3)/(4*S);
        cir=2*3.141592653589793*R;
        printf("%.2lf\n",cir);
    }
    return 0;
}

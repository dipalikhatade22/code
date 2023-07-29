#include<stdio.h>
int main()
{
int l,b,h;
int TSA,LSA;
scanf("%d%d%d",&l,&b,&h);
LSA=2*(l+b)*h;
TSA=2*(l*b+b*h+l*h);
printf("%d\n%d\n",LSA,TSA);
return 0;
}

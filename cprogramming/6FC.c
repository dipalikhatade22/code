#include<stdio.h>
#include<math.h>
int main()
{
	int t,p,i,N;
	scanf("%d %d %d",&p,&i,&N);
	t=p*(1+(i/100))^N;
	printf("%d",t);
	return 0;
}


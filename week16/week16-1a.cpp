//week16-1a.cpp SOIT106_ADVANCE_005_C
#include <stdio.h>
#include <math.h>
int MYPOWER(int a,int b)
{
	return pow(a, b);
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
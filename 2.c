#include <stdio.h>

int main()
{
	int a;
	int b;
	scanf("%d %d",&a,&b);
	int h=a/100;
	int m=a%100;
	int c=h*60+m;
	int h1=(c+b)/60;
	int m1=(c+b)%60;
	printf("%d\n",h1*100+m1);
	return 0;
	
}
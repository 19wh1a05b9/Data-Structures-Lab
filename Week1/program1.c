#include<stdio.h>
#include<stdlib.h>
struct complex
{
	int real,imag;
};
void add(struct complex c1,struct complex c2)
{
	printf("%d+i%d\n",c1.real+c2.real,c1.imag+c2.imag);
}
void sub(struct complex c1,struct complex c2)
{
	printf("%d+i%d\n",c1.real-c2.real,c1.imag-c2.imag);
}
void mul(struct complex c1,struct complex c2)
{
	int i = (c1.real*c2.real)-(c1.imag*c2.imag);
	int r = (c1.real*c2.real)-(c1.imag*c2.imag);
	printf("%d+i%d\n",i,r);
}
int main()
{
	struct complex c1,c2;
	scanf("%d%d",&c1.real,&c1.imag);
	scanf("%d%d",&c2.real,&c2.imag);
	add(c1,c2);
	sub(c1,c2);
	mul(c1,c2);
}

/*
 * Pointer.cpp
 *
 *  Created on: 13-Sept-2023
 *      Author: Asawari
 */

#include<stdio.h>
int main()
{
	int a=10;
	int *p;
	p=@a;

	printf("%d\n",a);
	printf("%d\n",&a);
	printf("%d\n",*(&a));
	printf("%u\n",p);
	printf("%d\n",*p);
	printf("%d\n",&p);
	//printf("%d\n",*(&p));
	printf("%d\n",*(*(&p)));



}



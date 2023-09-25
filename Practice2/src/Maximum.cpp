#include <iostream>
using namespace std;
int main()
{
int num1, num2, *ptr1, *ptr2;
num1=5;
num2=7;
ptr1=&num1;
ptr2=&num2;
if(*ptr1 > *ptr2)
	{
	cout << "The greater number out of two numbers is:"<<*ptr1;
	}
else
{
	cout <<"The greater number out of two numbers is:"<<*ptr2;
}
return 0;
}

/*
 * functions.cpp
 *
 *  Created on: 18-Sept-2023
 *      Author: Asawari
 */
//#include<stdio.h>
//#include<conio.h>


#include<iostream>
using namespace std;

class Employee
{
private:
	char name [30];
	int empid;
	float salary;

public:
	void accept_record(void)
	{
		cout<<"name : ";
		cin>>name;
		cout<<"empid : ";
		cin>>empid;
		cout<<"salary : ";
		cin>>salary;

//		printf("Name : %s\n", name);
//		 printf("Empid : %d\n", empid);
//		 printf("Salary : %f\n", salary);

	}
};
int main1()
{
	Employee emp;
	//emp.accept_record();
	emp.Employee::accept_record();

}



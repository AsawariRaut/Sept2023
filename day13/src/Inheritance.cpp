#include<iostream>
using namespace std;
class Shape
{
protected:
	float area;
public:
	Shape(void)
	{
		this->area=0;

	}
	void acceptRecord(void)
	{

	}
	void calculateRecord(void)
	{

	}
	virtual void showRecord(void)
	{
		cout<<"area is : "<<this->area<<endl;

	}
};
class Rectangle:public Shape
{
private:
	float length;
	float breadth;
public:
	Rectangle(void)
	{
	this->length=0;
	this->breadth=0;
	}
	void acceptRecord(void)
	{
		cout<<"Length :  ";
		cin>>this->length;
		cout<<"Breadth : ";
		cin>>this->breadth;
	}
	void calculateRecord(void)
	{
		this->area=this->length * this->breadth;
	}


};
class Circle:public Shape
{
private:
	float radius;
public:
	Circle(void)
	{
		this->radius=0;
	}
	void acceptRecord(void)
	{
		cout<<"Radius : ";
		cin>>this->radius;
	}
	void calculateRecord(void)
	{
		this->area=3.14 * this->radius * this ->radius;
	}
};
int main3(void)
{
	Rectangle rectangle;
	rectangle.acceptRecord();
	rectangle.calculateRecord();
	rectangle.showRecord();
	return 0;
}
int main4(void)
{
	Circle circle;
	circle.acceptRecord();
	circle.calculateRecord();
    circle.showRecord();
	return 0;
}

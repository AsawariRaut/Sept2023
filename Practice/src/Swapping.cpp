#include<iostream>

using namespace std;
int main(){

int num1,num2,num3, *ptr1, *ptr2, *ptr3, temp;
cout << "Enter value of first element:";
cin>> num1;
cout << "Enter value of second element:";
cin>> num2;
cout << "Enter value of third element:";
cin>> num3;
cout << "BEfore Swapping";
cout<<"Element 1:" << num1<<endl;
cout<<"Element 2:" << num2<<endl;
cout<<"Element 3:" << num3<<endl;

ptr1=&num1;
ptr2=&num2;
ptr3=&num3;
temp= *ptr1;
*ptr1=*ptr3;
*ptr3=*ptr2;
*ptr2=temp;
cout<< "After swapping:"<<endl;
cout<< "Element 1: "<<*ptr1<<endl;
cout<< "Element 2: "<<*ptr2<<endl;
cout<< "Element 3: "<<*ptr3<<endl;
}

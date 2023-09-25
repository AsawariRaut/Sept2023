/*
 * namespace.cpp
 *
 *  Created on: 18-Sept-2023
 *      Author: Asawari
 */


#include<stdio.h>
//namespace na{
// int num1 = 10;
// int num2 = 20;
//}
//namespace nb{
// int num1 = 30;
// int num3 = 40;
//}
//int main( void ){
// printf("Num1 : %d\n", na::num1); //OK: 10
// printf("Num2 : %d\n", na::num2); //OK: 20
// printf("Num1 : %d\n", nb::num1); //OK: 30
// printf("Num3 : %d\n", nb::num3); //OK: 40
// return 0;
//



//namespace na{
// int num1 = 10;
//}
//void show_record( ){
// using namespace na;
// printf("Num1 : %d\n", num1);
//}
//void print_record( ){
// using namespace na;
// printf("Num1 : %d\n", num1);
//}
//void display_record( ){
// using namespace na;
// printf("Num1 : %d\n", num1);
//}
//int main( void ){
// ::show_record( );
// ::print_record( );
// ::display_record( );
// return 0;
//}



namespace na{
 int num1 = 10;
}
void show_record( ){
 using namespace na;
 printf("Num1 : %d\n", num1);
}
void print_record( ){
 using namespace na;
 printf("Num1 : %d\n", num1);
}
void display_record( ){
 using namespace na;
 printf("Num1 : %d\n", num1);
}
int main( void ){
 ::show_record( );
 ::print_record( );
 ::display_record( );
 return 0;
}


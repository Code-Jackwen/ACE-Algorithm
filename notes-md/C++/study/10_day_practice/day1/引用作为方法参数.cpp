
#include <iostream>
using namespace std;
 
//C++之所以增加引用类型， 主要是把它作为函数参数，以扩充函数传递数据的功能。
//C++ 函数传参：
//1、将变量名作为实参和形参。这时传给形参的是变量的值，传递是单向的。
//如果在执行函数期间形参的值发生变化，并不传回给实参。
//因为在调用函数时，形参和实参不是同一个存储单元。// 同 c

//2、 传递变量的指针。形参是指针变量，实参是一个变量的地址，调用函数时，
//形参(指针变量)指向实参变量单元。这种通过形参指针可以改变实参的值。// 同 c
//3、 C++提供了 传递变量的引用。形参是引用变量，和实参是一个变量，
//调用函数时，形参(引用变量)指向实参变量单元。这种通过形参引用可以改变实参的值。


// 函数声明
void swap(int& x, int& y);
 
int main ()
{
   // 局部变量声明
   int a = 100;
   int b = 200;
 
   cout << "交换前，a 的值：" << a << endl;
   cout << "交换前，b 的值：" << b << endl;
 
   /* 调用函数来交换值 */
   swap(a, b);
 
   cout << "交换后，a 的值：" << a << endl;
   cout << "交换后，b 的值：" << b << endl;
 
   return 0;
}
 
// 函数定义
void swap(int& x, int& y)
{
   int temp;
   temp = x; /* 保存地址 x 的值 */
   x = y;    /* 把 y 赋值给 x */
   y = temp; /* 把 x 赋值给 y  */
  
   return;
}

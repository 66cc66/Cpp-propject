//#include<iostream>
//using namespace std;

//int main()
//{
//	//int* p = new int(121);初始化,赋值成121；
//	int* p = new int;//new + type(value)要类型匹配
//	*p = 121;
//	int* p1 = new int[5];
//	memset(p1, 0, 4 * 5);
//	int a = 2;
//	int* p2 = &a;
//	*p2 = 3;
//	cout << *p << endl << p1[0] << p1[4] << endl << *p2;
//	delete[] p1;//千万别忘了[],这个代表数组
//	delete p;
//	return 0;
//}

//int main()
//{
//	int a = 12;
//	int& b = a;//b是a的别名,声明时必须初始化
//	int& c = b;
//	cout << &a << ' ' << &b << ' ' << &c << endl;
//	cout << a << b << c;//b = a，两个都指向同一个空间
//	return 0;
//}

//int main()
//{
//	//类型要匹配
//	const int& a = 12;//常量的引用
//	//数组的引用
//	int arr[3];
//	int(&p1)[3] = arr;
//	p1[2] = 3;
//	int arr2[2][2];
//	int(&p2)[2][2] = arr2;
//	p2[1][1] = 1;
//	cout << a << endl << arr[2] << endl << p1[2] << endl << p2[1][1] << endl << arr2[1][1] << endl;
//
//	//指针的引用
//	int b = 2;
//	int* p3 = &b;
//	int*& p4 = p3;
//	*p4 = 3;
//	cout << *p4 << endl << *p3 << endl << b;
//	return 0;
//}

//引用作函数参数:可以是形参修饰实参，即可以简化指针修改指针

//void fun1(int& a)
//{
//	a = 1;
//}
//
//void swap(int& q, int& p)
//{
//	int t = q;
//	q = p;
//	p = t;
//}
//int main()
//{
//	
//	int b = 12;
//	int c = 4;
//	fun1(b);
//	cout << b << endl;
//	swap(b, c);
//	cout << b << ' ' << c;
//	return 0;
//}

//引用作返回值,不要引用局部变量

//int& fun()
//{
//	int a = 12;
//	return a;
//}
//int main()
//{
//	int& b = fun();
//	cout << b;//非法的
//	return 0;
//}

//参数缺省值/默认值，一定是从右到左，逐个指定

//void fun1(int a = 12, char c = 'b')
//{
//	cout << a << endl << c << endl;
//}
//
//void fun2(int a = 4, char c = 'r');//声明时写默认值
//
//int main()
//{
//	//函数调用：有默认值的参数，可以不用传实参, 否则必须传递实参。有默认值还传递实参，实参会覆盖默认值
//	fun1();
//	fun1(1, 'c');
//	return 0;
//}
//
//void fun2(int a, char c)
//{
//	cout << a << endl << c << endl;
//}

//基本语法：数据类型 &别名 = 原名;
//必须初始化且初始化后不可更改
//本质：指针常量，指针指向不可改，指向的值可改
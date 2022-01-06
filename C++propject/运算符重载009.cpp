//#include<iostream>
//using namespace std;
//
//class People
//{
//	friend ostream& operator<<(ostream& cout, People c);//重载左移运算符配合友元可以实现输出自定义数据类型
//	int height;
//	int weight;
//	int Num;
//public:
//	People()
//	{
//		height = 2;
//		weight = 1;
//		Num = 0;
//	}
//	/*int operator+(int a)
//	{
//		return this->height + a;
//	}*/
//
//	//前置++
//	People& operator++() //返回引用为了一直对一个数据进行递增操作
//	{
//		//先进行++运算
//		++Num;
//		//再将自身做返回
//		return *this;
//	}
//
//	//后置递增
//	People operator++(int)//用占位参数int,可用于区分前后置递增;返回的一定是值，否则会非法操作
//	{
//		//先记录当时结果
//		People t = *this;
//		//后递增
//		Num++;
//		//最后将记录的结果返回
//		return t;
//	}
//};
//
////void operator-(People&a, int b)
////{
////	cout << (a.weight - b) << endl;
////}
////
////int operator+(int b, People&a)
////{
////	return (a.height + b);
////}
////
////People operator+(People& a, People& b)
////{
////	People t;
////	t.height = a.height + b.height;
////	t.weight = a.weight + b.weight;
////	return t;
////}
////
////People operator+(People& a, int b)//运算符也可重载
////{
////	People t;
////	t.height = a.height + b;
////	t.weight = a.weight + b;
////	return t;
////}
//
//ostream& operator<<(ostream& cout, People c)//ostream对象只有一个所以一定要加&,??为啥不是People& c
//{
//	//cout << c.height << " " << c.weight;
//	cout << c.Num;
//	return cout;
//}
//
////加法运算符重载
//
////int main()
////{
////	People a;
////	People b;
////	/*b.height = 1;
////	a - 12;
////	cout << 12 + a + 1 << endl;
////	cout << 1 + b + a - 1;*/
////	/*cout << a.operator+(12) << endl;//成员函数重载的本质调用
////	cout << a + 12 << endl;*///简化形式
////
////	People c;
////	//c = operator+(a, b);//全局函数的本质调用
////	//c = a + b;//简化形式
////	//c = a + 1;//重载
////	//cout << c.height << endl << c.weight << endl;
////	return 0;
////}
//
////左移运算符重载
//
////int main()
////{
////	People a, b, c;
////	cout << c << endl << "链式编程";
////	return 0;
////}
//
////递增运算符重载
//
//int main()
//{
//	People a;
//	cout << a << endl;
//	cout << ++a << endl;
//	cout << a << endl;
//	People b;
//	cout << b << endl;
//	cout << b++ << endl;
//	cout << b << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;

//class Cstu
//{
//public:
//	int a;
//	Cstu(int a)
//	{
//		this->a = a;
//		this->show();
//	}
//	void show()
//	{
//		cout << a << endl;
//	}
//	Cstu* p()
//	{
//		return this;
//	}
//	Cstu get()
//	{
//		return *this;
//	}
//};
//int main()
//{
//	Cstu s(12);
//	s.show();
//	cout << s.p()->a << endl << &s.a << endl << (s.get()).a;//??
//	return 0;
//}

//class Cstu
//{
//public:
//	int m_a;
//
//	Cstu(int a)
//	{
//		this->m_a = a;
//	}
//	void show()
//	{
//		cout << m_a << endl;
//	}
//	Cstu& fun(Cstu& p)
//	{
//		p.m_a += 2;
//		return *this;
//	}
//};
//
//int main()
//{
//	Cstu a(11);
//	Cstu b(3);
//	cout << b.fun(a).fun(a).fun(a).m_a << endl;
//	cout << a.fun(b).fun(b).fun(b).m_a << endl;
//	cout << a.fun(a).fun(a).fun(a).m_a << endl;
//	cout << b.fun(b).fun(b).fun(b).m_a << endl;
//	return 0;
//}

////作用：1.区别同名，2.是指向当前对象的指针，所以可通过指针访问成员
////对象创建时才有
////类型：对应对象类的指针类型
////this指针不是成员
////this作用域是在类的内部，系统默认传递给函数（非静态函数）的隐含参数
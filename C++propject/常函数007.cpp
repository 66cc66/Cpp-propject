//#include<iostream>
//using namespace std;
//
//class Cstu
//{
//public:
//	int a;
//	Cstu()
//	{
//		a = 12;
//	}
//	~Cstu()
//	{
//
//	}
//	void show() const
//	{
//		int b = 2;
//		b = a * b; 
//		cout << a << endl << b << endl << this->a;
//	}
//	void fun()
//	{
//		cout << "cc";
//	}
//};
//int main()
//{
//	const Cstu s;//常对象，即对象加个const
//	s.show();
//	return 0;
//}
//
////构造和析构不可以是常函数
////可以使用，不可改变
////常函数的指针是const Cstu*
////常对象只能调用常函数，不能调用普通函数
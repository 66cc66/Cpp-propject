//#include<iostream>
//using namespace std;
//
//class Cstu
//{
//public:
//	Cstu()
//	{
//		cout << "构造函数\n";
//	}
//	~Cstu()//~
//	{
//		cout << "析构函数\n";
//	}
//};
//
//int main()
//{
//	//局部对象
//	/*{
//		Cstu a;
//	}*/
//	//指针对象，只有整个程序完，才会自动回收，所以不会在中途进入析构函数,只有遇到delete
//	/*Cstu* p = new Cstu;
//	delete p;*/
//	//临时对象，只在一条语句内有效
//	/*int a = int(12);*///q = 12, a = q;
//	Cstu();
//	return 0;
//}
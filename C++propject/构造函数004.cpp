//#include<iostream>
//using namespace std;

//class Cstu
//{
//public:
//	int a;
//	float b;
//	//构造函数
//	Cstu() : a(12), b(21.12)//初始化列表，构造函数后加个:，按声明的顺序初始化，与初始化列表顺序无关.
//	{
//		//赋值的过程，会把初始化的内容覆盖掉
//		/*a = 2;
//		b = 12.21f;*/
//	}
//	//Cstu(int t = 2, float e = 12.21f);//声明一下
//	
//};
//
////Cstu :: Cstu(int t, float e)//带参数的,类外构造,加个::类名作用域,定义时不要写上参数值
////{
////	a = t;
////	b = e;
////}
//
//int main()
//{
//	Cstu stu;
//	//Cstu* s1 = new Cstu(2, 12.21f);
//	//Cstu* s1 = new Cstu;
//	cout << stu.a << endl << stu.b;
//	//cout << s1->a << endl << s1->b;
//	return 0;
//}

//为了防止忘记初始化或初始化后忘记调用
//栈区调用：自动调用
//堆区调用：声明指针不会自动调用，new空间时才会

//1. 构造函数的作用
//构造函数主要用来在创建对象时完成对对象属性的一些初始化等操作, 当创建
//对象时, 对象会自动调用它的构造函数。一般来说, 构造函数有以下三个方面
//的作用 :
//■ 给创建的对象建立一个标识符;
//■ 为对象数据成员开辟内存空间;
//■ 完成对象数据成员的初始化。
//
//2. 默认构造函数
//当用户没有显式的去定义构造函数时, 编译器会为类生成一个默认的构造函数,
//称为 "默认构造函数", 默认构造函数不能完成对象数据成员的初始化, 只能给
//对象创建一标识符, 并为对象中的数据成员开辟一定的内存空间。
//
//3. 构造函数的特点
//无论是用户自定义的构造函数还是默认构造函数都主要有以下特点 :
//①.在对象被创建时自动执行;
//②.构造函数的函数名与类名相同;
//③.没有返回值类型、也没有返回值;
//④.构造函数不能被显式调用。???

//class Cstu
//{
//public:
//	int a;
//	int& b;
//	Cstu(int& c) : a(c), b(c)//作用域
//	{
//		cout << a << ' ' << b << endl;
//	}
//	void fun()
//	{
//		cout << a << ' ' << b;
//	}
//};
//int main()
//{
//	int c = 12;
//	Cstu s(c);
//	s.fun();
//	return 0;
//}

//class Cstu
//{
//public:
//	int a[4];
//	
//	struct ss
//	{
//		int c;
//		char d;
//	};
//	Cstu() //: a()//不是所有编译器都可以，看看就行
//	{
//		/*for (int i = 0; i < 4; i++)
//			a[i] = 0;*///方法一
//		//法二
//		memset(a, 0, 4 * 4);
//	}
//	ss s2 = { 3, 'u' };
//	void fun()
//	{
//		for (int i = 0; i < 4; i++)
//		cout << a[i] << endl;
//		cout << s2.c << endl << s2.d;
//	}
//};
//int main()
//{
//	Cstu s;
//	s.fun();
//	return 0;
//}

//拷贝构造函数，important

//class Cstu
//{
//public:
//	Cstu()
//	{
//
//	}
//	Cstu(const Cstu& a)//重载关系
//	{
//
//	}
//	void fun(Cstu a)
//	{
//		cout << "实参把形参初始化\n";
//	}
//	Cstu fun1()
//	{
//		Cstu a;
//		return a;
//	}
//};
//
//int main()
//{
//	//1.新建一个对象，并将其初始化为同类现有对象
//	Cstu a;
//	Cstu b(a);
//	Cstu c = a;
//	Cstu d = Cstu(a);//不常见
//	Cstu* e = new Cstu(a);
//
//	//赋值不会进入拷贝构造。
//	Cstu f;
//	f = a;
//	
//	//2.当程序生成对象副本时，函数参数传递对象的值，函数返回对象
//	
//	a.fun1();
//	return 0;
//}

//默认的拷贝构造函数：逐个复制非静态成员（成员的复制称为浅复制），复制的是成员的值。
//同一个类的对象，内存排布是一样的，地址不同

//class Cstu
//{
//public:
//	int a;
//	char c[4];
//	Cstu()
//	{
//		a = 1;
//		strcpy_s(c, 4, "abc");
//	}
//	//默认的拷贝构造里是执行了内容的,浅拷贝
//	Cstu(const Cstu& a)
//	{
//		this->a = a.a;
//		strcpy_s(this->c, 4, a.c);//手写实现默认的
//	}
//};
//
//int main()
//{
//	Cstu st;
//	Cstu sr = st;
//	//sr = st;
//	cout << st.a << endl << st.c << endl;
//	cout << sr.a << endl << sr.c << endl;
//	return 0;
//}

//深拷贝，解决浅拷贝释放指针成员时会崩溃的问题

//class Cstu
//{
//public:
//	int* a;
//	Cstu()
//	{
//		a = new int[2];
//		a[0] = 12;
//		a[1] = 13;
//	}
//	Cstu(const Cstu& b)
//	{
//		//this->a = b.a;//系统默认的拷贝构造，会使ss的a与st的a有相同的地址，导致二次释放时会使用野指针导致系统崩了。
//		this->a = new int[2];//申请新空间，就不会有相同的地址
//		/*this->a[0] = b.a[0];
//		this->a[1] = b.a[1];*/
//		memcpy(this->a, b.a, 8);
//	}
//	~Cstu()
//	{
//		delete[] a;
//	}
//};
//
//int main()
//{
//	{
//		Cstu st;
//		cout << st.a[0] << ' ' << st.a[1] << endl;
//		Cstu ss = st;
//		cout << ss.a[0] << ' ' << ss.a[1] << endl;
//	}
//
//	return 0;
//}

//避免拷贝构造：
//传递引用
//传递指针
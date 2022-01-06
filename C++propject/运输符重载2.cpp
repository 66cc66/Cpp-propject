//#include<iostream>
//using namespace std;

//赋值运算符重载

//class Cstu
//{
//public:
//	int *m_a;
//	Cstu(int n)
//	{
//		this->m_a = new int(n);
//	}
//	~Cstu()
//	{
//		if (this->m_a != NULL)
//		{
//			delete this->m_a;
//			m_a = NULL;
//		}
//	}
//
//	Cstu& operator=(Cstu& p)
//	{
//		//this->m_a = p.m_a;//编译器默认的
//		//应先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
//		if (m_a != NULL)
//		{
//			delete m_a;
//			m_a = NULL; 
//		}
//		this->m_a = new int(*p.m_a);
//		return *this;
//	}
//};
//
//void test1()
//{
//	Cstu a(80), b(90), c(70);
//	c = a = b;
//	cout << "a的m_a:" << *a.m_a << endl;
//	cout << "b的m_a:" << *b.m_a << endl;
//	cout << "c的m_a:" << *c.m_a << endl;
//}
//
//int main()
//{
//	
//	test1();
//	return 0;
//}

//关系运算符重载

//class People
//{
//	int height;
//	int weight;
//public:
//	People(int h, int w)
//	{
//		height = h;
//		weight = w;
//	}
//	bool operator <(const People& p)
//	{
//		if (height < p.height)
//		{
//			return true;
//		}
//		if (height == p.height && weight < p.weight)
//		{
//			return true;
//		}
//		return false;
//	}
//};
//
//void test1()
//{
//	People a(3, 4);
//	People b(2, 5);
//	//int c = a > b;
//	//cout << c;
//	if (a < b)
//		cout << "a.height > b.height\n";
//	else
//		cout << "a.height < b.height\n";
//}
//
//int mian()
//{
//	test1();
//	return 0;
//}

//函数调用运算符重载（）
//仿函数非常灵活没有固定写法

//class My_print
//{
//public:
//	void operator()(string name)
//	{
//		cout << name << endl;
//	}
//};
//
//class Myadd
//{
//public:
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//};
//
//void test1()
//{
//	My_print name;
//	name("dsf");//由于使用起来非常像函数调用，因此称为仿函数.
//}
//
//void test2()
//{
//	Myadd add;
//	cout << add(2, 4) << endl;
//	//匿名函数对象
//	cout << Myadd()(100, 100) << endl;
//}
//
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}
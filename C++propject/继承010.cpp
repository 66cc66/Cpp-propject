#include<iostream>
using namespace std;

//语法:class 子类（派生类） ：继承方式 父类1（基类），继承方式 父类2.....
//好处：减少重复代码
//继承方式：1.公共继承2.保护继承3.私有继承

//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "登录、注册、首页......\n";
//	}
//	void footer()
//	{
//		cout << "帮助中心、合作交流......\n";
//	}
//};
//
//class Cpp : public BasePage
//{
//public:
//	void center()
//	{
//		cout << "继承\n";
//	}
//};
//
//void test1()
//{
//	Cpp pp;
//	pp.footer();
//	pp.header();
//	pp.center();
//}
//int main()
//{
//	test1();
//	return 0;
//}

//继承方式

//class father
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//
//class son1 : public father
//{
//public:
//	void fun()
//	{
//		a = 10;//父类中公共权限成员到子类依然是公共权限
//		b = 122;//父类中保护权限成员到子类依然是保护权限
//		//c = 3;//父类中私有权限成员子类不可访问
//	}
//};
//
//class son2 : protected father
//{
//public:
//	void fun()
//	{
//		a = 10; //父类中公共权限成员到子类是保护权限
//		b = 122;//父类中保护权限成员到子类依然是保护权限
//		//c = 3;//父类中私有权限成员子类不可访问
//	}
//};
//
//class son3 : private father
//{
//public:
//	void fun()
//	{
//		a = 10;//父类中公共权限成员到子类是私有权限
//		b = 122;//父类中保护权限成员到子类依然是私有权限
//		//c = 3;//父类中私有权限成员子类不可访问
//	}
//};
//
//class grandson : private son3
//{
//	void fun()
//	{
//		//a = 1;
//		//b = 2;
//		//c = 3;
//	}
//};
//int main()
//{
//
//	return 0;
//}

//继承中的对象模型

//class father
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;//私有成员只是被隐藏，但还是会被继承下去
//};
//
//class son : public father
//{
//	int d;
//};
//
//int main()
//{
//	son a1;
//	cout << sizeof(a1) << endl;
//	return 0;
//}

//继承中构造与析构的顺序

//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "基类构造\n";
//	}
//	virtual ~Animal()
//	{
//		cout << "基类析构\n";
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	Dog()
//	{
//		cout << "派生类构造\n";
//	}
//	~Dog()
//	{
//		cout << "派生类析构\n";
//	}
//};
//
//void test2(Animal* animal)
//{
//	
//	delete animal;
//}
//
//void test1()
//{
//	Dog a;
//}
//int main()
//{
//	Dog* a = new Dog;
//	//Dog a;
//	//test1();
//	test2(a);
//	return 0;
//}

//继承中同名，1.如果子类出现与父类同名的成员函数，子类的同名函数会屏蔽父类中所有的同名成员函数
//2.如果想访问到父类中的被隐藏的成员函数，需要加作用域::

//class Animal
//{
//public:
//	int a;
//	Animal()
//	{
//		a = 1;
//	}
//	~Animal()
//	{
//	
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	int a;
//	Dog()
//	{
//		a = 2;
//		
//	}
//	~Dog()
//	{
//
//	}
//	void fun()
//	{
//		cout << Animal::a;
//	}
//};
//
//void test1()
//{
//	Dog a1;
//	a1.fun();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//菱形继承
//利用虚继承解决菱形继承问题

//class Animal
//{
//public:
//	int age;
//	Animal()
//	{
//		age = 2;
//	}
//};
//
//class Sheep : virtual public Animal
//{
//
//};
//
//class Camel : virtual public Animal
//{
//
//};
//
//class SheepCamel : public Sheep, public Camel
//{
//
//};
//
//void test1()
//{
//	SheepCamel st;
//	st.Sheep::age = 18;
//	st.Camel::age = 28;
//	cout << "st.Sheep::age = " << st.Sheep::age << endl;
//	cout << "st.Camel::age = " << st.Camel::age << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}



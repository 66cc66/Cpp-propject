#include<iostream>
using namespace std;

//动态多态的条件
//1.有继承关系2.子类重写父类的虚函数
//多态的使用条件：父类指针或引用指向子类对象
//一个接口多个形态

//class Animal
//{
//public:
//	virtual void speak()//虚函数
//	{
//		cout << "动物叫\n";
//	}
//  //virtual void speak() = 0;//纯虚函数
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "狗叫\n";
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "猫叫\n";
//	}
//};
//
//void dospeak(Animal& animal)//允许父子间的类型转换，不需要强转，父类的引用就可直接指向子类对象
//{
//	animal.Animal::speak();
//}
//
//int main()
//{
//	Cat cat;
//	dospeak(cat);
//	return 0;	
//}

//class Animal
//{
//public:
//	virtual void speak() = 0;
//	Animal()
//	{
//		cout << "Animal的构造调用\n";
//	}
//	/*virtual ~Animal()
//	{
//		cout << "Animal的析构调用\n";
//	}*/
//	virtual ~Animal() = 0;//纯析构
//};
//
//Animal::~Animal()
//{
//	cout << "Animal的纯虚析构调用\n";
//}
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "狗叫\n";
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << *My_name << "猫叫\n";
//	}
//	Cat(string name)
//	{
//		My_name = new string(name);
//		cout << "Cat的构造调用\n";
//	}
//	string* My_name;
//	~Cat()
//	{
//		if (My_name)
//		{
//			delete My_name;
//			My_name = NULL;
//			cout << "Cat的析构调用\n";
//		}
//	}
//};
//
//void dospeak(Animal* animal)
//{
//	//父类指针在析构时候，不会调用子类的析构函数，导致子类如果有堆区属性，就会出现内存泄露的情况
//	animal->speak();
//	delete animal;
//}
//
//int main()
//{
//	Cat *cat = new Cat("xxx");
//	
//	dospeak(cat);
//	//Dog dog;
//	//dospeak(dog);
//	return 0;
//}




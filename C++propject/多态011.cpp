#include<iostream>
using namespace std;

//��̬��̬������
//1.�м̳й�ϵ2.������д������麯��
//��̬��ʹ������������ָ�������ָ���������
//һ���ӿڶ����̬

//class Animal
//{
//public:
//	virtual void speak()//�麯��
//	{
//		cout << "�����\n";
//	}
//  //virtual void speak() = 0;//���麯��
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "����\n";
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "è��\n";
//	}
//};
//
//void dospeak(Animal& animal)//�����Ӽ������ת��������Ҫǿת����������þͿ�ֱ��ָ���������
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
//		cout << "Animal�Ĺ������\n";
//	}
//	/*virtual ~Animal()
//	{
//		cout << "Animal����������\n";
//	}*/
//	virtual ~Animal() = 0;//������
//};
//
//Animal::~Animal()
//{
//	cout << "Animal�Ĵ�����������\n";
//}
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "����\n";
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << *My_name << "è��\n";
//	}
//	Cat(string name)
//	{
//		My_name = new string(name);
//		cout << "Cat�Ĺ������\n";
//	}
//	string* My_name;
//	~Cat()
//	{
//		if (My_name)
//		{
//			delete My_name;
//			My_name = NULL;
//			cout << "Cat����������\n";
//		}
//	}
//};
//
//void dospeak(Animal* animal)
//{
//	//����ָ��������ʱ�򣬲���������������������������������ж������ԣ��ͻ�����ڴ�й¶�����
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




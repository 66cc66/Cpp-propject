#include<iostream>
using namespace std;

//�﷨:class ���ࣨ�����ࣩ ���̳з�ʽ ����1�����ࣩ���̳з�ʽ ����2.....
//�ô��������ظ�����
//�̳з�ʽ��1.�����̳�2.�����̳�3.˽�м̳�

//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "��¼��ע�ᡢ��ҳ......\n";
//	}
//	void footer()
//	{
//		cout << "�������ġ���������......\n";
//	}
//};
//
//class Cpp : public BasePage
//{
//public:
//	void center()
//	{
//		cout << "�̳�\n";
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

//�̳з�ʽ

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
//		a = 10;//�����й���Ȩ�޳�Ա��������Ȼ�ǹ���Ȩ��
//		b = 122;//�����б���Ȩ�޳�Ա��������Ȼ�Ǳ���Ȩ��
//		//c = 3;//������˽��Ȩ�޳�Ա���಻�ɷ���
//	}
//};
//
//class son2 : protected father
//{
//public:
//	void fun()
//	{
//		a = 10; //�����й���Ȩ�޳�Ա�������Ǳ���Ȩ��
//		b = 122;//�����б���Ȩ�޳�Ա��������Ȼ�Ǳ���Ȩ��
//		//c = 3;//������˽��Ȩ�޳�Ա���಻�ɷ���
//	}
//};
//
//class son3 : private father
//{
//public:
//	void fun()
//	{
//		a = 10;//�����й���Ȩ�޳�Ա��������˽��Ȩ��
//		b = 122;//�����б���Ȩ�޳�Ա��������Ȼ��˽��Ȩ��
//		//c = 3;//������˽��Ȩ�޳�Ա���಻�ɷ���
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

//�̳��еĶ���ģ��

//class father
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;//˽�г�Աֻ�Ǳ����أ������ǻᱻ�̳���ȥ
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

//�̳��й�����������˳��

//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "���๹��\n";
//	}
//	virtual ~Animal()
//	{
//		cout << "��������\n";
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	Dog()
//	{
//		cout << "�����๹��\n";
//	}
//	~Dog()
//	{
//		cout << "����������\n";
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

//�̳���ͬ����1.�����������븸��ͬ���ĳ�Ա�����������ͬ�����������θ��������е�ͬ����Ա����
//2.�������ʵ������еı����صĳ�Ա��������Ҫ��������::

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

//���μ̳�
//������̳н�����μ̳�����

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



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

////���ã�1.����ͬ����2.��ָ��ǰ�����ָ�룬���Կ�ͨ��ָ����ʳ�Ա
////���󴴽�ʱ����
////���ͣ���Ӧ�������ָ������
////thisָ�벻�ǳ�Ա
////this��������������ڲ���ϵͳĬ�ϴ��ݸ��������Ǿ�̬����������������
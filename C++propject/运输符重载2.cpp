//#include<iostream>
//using namespace std;

//��ֵ���������

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
//		//this->m_a = p.m_a;//������Ĭ�ϵ�
//		//Ӧ���ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ�������
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
//	cout << "a��m_a:" << *a.m_a << endl;
//	cout << "b��m_a:" << *b.m_a << endl;
//	cout << "c��m_a:" << *c.m_a << endl;
//}
//
//int main()
//{
//	
//	test1();
//	return 0;
//}

//��ϵ���������

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

//����������������أ���
//�º����ǳ����û�й̶�д��

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
//	name("dsf");//����ʹ�������ǳ��������ã���˳�Ϊ�º���.
//}
//
//void test2()
//{
//	Myadd add;
//	cout << add(2, 4) << endl;
//	//������������
//	cout << Myadd()(100, 100) << endl;
//}
//
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}
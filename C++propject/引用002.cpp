//#include<iostream>
//using namespace std;

//int main()
//{
//	//int* p = new int(121);��ʼ��,��ֵ��121��
//	int* p = new int;//new + type(value)Ҫ����ƥ��
//	*p = 121;
//	int* p1 = new int[5];
//	memset(p1, 0, 4 * 5);
//	int a = 2;
//	int* p2 = &a;
//	*p2 = 3;
//	cout << *p << endl << p1[0] << p1[4] << endl << *p2;
//	delete[] p1;//ǧ�������[],�����������
//	delete p;
//	return 0;
//}

//int main()
//{
//	int a = 12;
//	int& b = a;//b��a�ı���,����ʱ�����ʼ��
//	int& c = b;
//	cout << &a << ' ' << &b << ' ' << &c << endl;
//	cout << a << b << c;//b = a��������ָ��ͬһ���ռ�
//	return 0;
//}

//int main()
//{
//	//����Ҫƥ��
//	const int& a = 12;//����������
//	//���������
//	int arr[3];
//	int(&p1)[3] = arr;
//	p1[2] = 3;
//	int arr2[2][2];
//	int(&p2)[2][2] = arr2;
//	p2[1][1] = 1;
//	cout << a << endl << arr[2] << endl << p1[2] << endl << p2[1][1] << endl << arr2[1][1] << endl;
//
//	//ָ�������
//	int b = 2;
//	int* p3 = &b;
//	int*& p4 = p3;
//	*p4 = 3;
//	cout << *p4 << endl << *p3 << endl << b;
//	return 0;
//}

//��������������:�������β�����ʵ�Σ������Լ�ָ���޸�ָ��

//void fun1(int& a)
//{
//	a = 1;
//}
//
//void swap(int& q, int& p)
//{
//	int t = q;
//	q = p;
//	p = t;
//}
//int main()
//{
//	
//	int b = 12;
//	int c = 4;
//	fun1(b);
//	cout << b << endl;
//	swap(b, c);
//	cout << b << ' ' << c;
//	return 0;
//}

//����������ֵ,��Ҫ���þֲ�����

//int& fun()
//{
//	int a = 12;
//	return a;
//}
//int main()
//{
//	int& b = fun();
//	cout << b;//�Ƿ���
//	return 0;
//}

//����ȱʡֵ/Ĭ��ֵ��һ���Ǵ��ҵ������ָ��

//void fun1(int a = 12, char c = 'b')
//{
//	cout << a << endl << c << endl;
//}
//
//void fun2(int a = 4, char c = 'r');//����ʱдĬ��ֵ
//
//int main()
//{
//	//�������ã���Ĭ��ֵ�Ĳ��������Բ��ô�ʵ��, ������봫��ʵ�Ρ���Ĭ��ֵ������ʵ�Σ�ʵ�λḲ��Ĭ��ֵ
//	fun1();
//	fun1(1, 'c');
//	return 0;
//}
//
//void fun2(int a, char c)
//{
//	cout << a << endl << c << endl;
//}

//�����﷨���������� &���� = ԭ��;
//�����ʼ���ҳ�ʼ���󲻿ɸ���
//���ʣ�ָ�볣����ָ��ָ�򲻿ɸģ�ָ���ֵ�ɸ�
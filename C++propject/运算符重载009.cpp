//#include<iostream>
//using namespace std;
//
//class People
//{
//	friend ostream& operator<<(ostream& cout, People c);//������������������Ԫ����ʵ������Զ�����������
//	int height;
//	int weight;
//	int Num;
//public:
//	People()
//	{
//		height = 2;
//		weight = 1;
//		Num = 0;
//	}
//	/*int operator+(int a)
//	{
//		return this->height + a;
//	}*/
//
//	//ǰ��++
//	People& operator++() //��������Ϊ��һֱ��һ�����ݽ��е�������
//	{
//		//�Ƚ���++����
//		++Num;
//		//�ٽ�����������
//		return *this;
//	}
//
//	//���õ���
//	People operator++(int)//��ռλ����int,����������ǰ���õ���;���ص�һ����ֵ�������Ƿ�����
//	{
//		//�ȼ�¼��ʱ���
//		People t = *this;
//		//�����
//		Num++;
//		//��󽫼�¼�Ľ������
//		return t;
//	}
//};
//
////void operator-(People&a, int b)
////{
////	cout << (a.weight - b) << endl;
////}
////
////int operator+(int b, People&a)
////{
////	return (a.height + b);
////}
////
////People operator+(People& a, People& b)
////{
////	People t;
////	t.height = a.height + b.height;
////	t.weight = a.weight + b.weight;
////	return t;
////}
////
////People operator+(People& a, int b)//�����Ҳ������
////{
////	People t;
////	t.height = a.height + b;
////	t.weight = a.weight + b;
////	return t;
////}
//
//ostream& operator<<(ostream& cout, People c)//ostream����ֻ��һ������һ��Ҫ��&,??Ϊɶ����People& c
//{
//	//cout << c.height << " " << c.weight;
//	cout << c.Num;
//	return cout;
//}
//
////�ӷ����������
//
////int main()
////{
////	People a;
////	People b;
////	/*b.height = 1;
////	a - 12;
////	cout << 12 + a + 1 << endl;
////	cout << 1 + b + a - 1;*/
////	/*cout << a.operator+(12) << endl;//��Ա�������صı��ʵ���
////	cout << a + 12 << endl;*///����ʽ
////
////	People c;
////	//c = operator+(a, b);//ȫ�ֺ����ı��ʵ���
////	//c = a + b;//����ʽ
////	//c = a + 1;//����
////	//cout << c.height << endl << c.weight << endl;
////	return 0;
////}
//
////�������������
//
////int main()
////{
////	People a, b, c;
////	cout << c << endl << "��ʽ���";
////	return 0;
////}
//
////�������������
//
//int main()
//{
//	People a;
//	cout << a << endl;
//	cout << ++a << endl;
//	cout << a << endl;
//	People b;
//	cout << b << endl;
//	cout << b++ << endl;
//	cout << b << endl;
//	return 0;
//}
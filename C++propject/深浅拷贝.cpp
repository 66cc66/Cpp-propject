//#include<iostream>
//using namespace std;
//
//class People
//{
//public:
//
//	People()
//	{
//		this->height = 2;
//		this->weight = &this->height;
//	}
//	People(int h, int w)
//	{
//		this->height = h;
//		this->weight = new int(w);
//	}
//	~People()
//	{
//		if (this->weight != NULL)
//		{
//			delete this->weight;
//			this->weight = NULL;
//		}
//	}
//	int height, * weight;
//	People(const People& w)
//	{
//		this->height = w.height;
//		//this->weight = w.weight;//Ç³¿½±´
//		this->weight = new int(*w.weight);//Éî¿½±´
//	}
//};
//
//void test01()
//{
//	People a(4, 5);
//	People b(a);
//	cout << a.height << endl << *a.weight << endl;
//	cout << b.height << endl << *b.weight << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}
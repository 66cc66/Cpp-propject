//#include<iostream>
//using namespace std;

//private:类内使用
//protected:类内及子类使用
//public:都可使用
//作用范围：书写位置开始，一直到下个修饰符，或者类结尾的花括号

//class Cpeople
//{
//private:
//	int a;
//public:
//	void fun()
//	{
//		cout << "public\n" << a << endl;
//	}
//	//默认类型private,结构体为public
//	void set()
//	{
//		a = 4;
//	}
//	int get()
//	{
//		return a;
//	}
//};
//
//int main()
//{
//	Cpeople bird;
//	bird.set();
//	int a = bird.get();
//	bird.fun();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main(int argc, char* argv[])
//{
//	int arr[5] = { 3, 2, 6, 7, 1 };
//	int flag = 0;
//	for (int j = 1; j < 5; j++)
//	{
//
//		for (int i = 0; i < 5 - j; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int t = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = t;
//				flag = 1;
//			}
//		}
//		if (!flag)
//			break;
//	}
//	for (int i = 0; i < 5; i++)
//		cout << arr[i] << endl;
//	return 0;
//}
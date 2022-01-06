//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[5] = { 1,3,5,2,6 };
//
//	for (int i = 1; i < 5; i++)
//	{
//		int m = arr[i];
//		for (int j = i - 1; j >= 0; j--)
//		{
//			if (m >= arr[j])
//			{
//				arr[j + 1] = m;//µ½Î»¸³Öµ
//				break;
//			}
//			arr[j + 1] = arr[j];
//			if (0 == j)
//			{
//				arr[j] = m;
//			}
//		}
//	}
//
//	for (int i = 0; i < 5; i++)
//		cout << arr[i] << endl;
//	return 0;
//}
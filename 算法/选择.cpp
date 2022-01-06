//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[5] = { 2,4,1,7,5 };
//
//	for (int j = 4; j > 0; j--)
//	{
//		int min = arr[0];
//		int index = 0;
//		for (int i = 1; i <= j; i++)
//		{
//			if (min > arr[i])
//			{
//				min = arr[i];
//				index = i;
//			}
//		}
//
//		int t = arr[index];
//		arr[index] = arr[j];
//		arr[j] = t;
//	}
//	for (int i = 0; i < 5; i++)
//		cout << arr[i] << endl;
//	return 0;
//}
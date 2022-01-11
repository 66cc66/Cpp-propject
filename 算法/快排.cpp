#include<iostream>
using namespace std;

void Quick(int left, int right, int* arr)
{
	if (left >= right)
		return;
	int q = left;
	int p = right;

	while (q < p)
	{
		while (q < p && arr[left] <= arr[p])
		{
			p--;
		}
		while (q < p && arr[left] >= arr[q])
		{
			q++;
		}
		if (q == p)
			break;
		else
		{
			int t = arr[q];
			arr[q] = arr[p];
			arr[p] = t;
		}
	}
	if (q != left)
	{
		int t = arr[q];
		arr[q] = arr[left];
		arr[left] = t;
	}
	Quick(left, q - 1, arr);
	Quick(p + 1, right, arr);
}

//非递归-栈实现

stack<int> s;
void Quick(int left, int right, int* arr)
{
	//入栈
	s.push(left);
	s.push(right);
	
	while (!s.empty())//栈不为空
	{
		right = s.top();
		s.pop();
		left = s.top();
		s.pop();

		int q = left;
		int p = right;
		
		while (q < p)
		{
			while (q < p && arr[left] <= arr[p])
			{
				p--;
			}
			while (q < p && arr[left] >= arr[q])
			{
				q++;
			}
			if (q == p)
				break;
			else
			{
				int t = arr[q];
				arr[q] = arr[p];
				arr[p] = t;
			}
		}

		if (q != left)
		{
			int t = arr[q];
			arr[q] = arr[left];
			arr[left] = t;
		}

		if (left < q - 1)
		{
			s.push(left);
			s.push(q - 1);
		}

		if (p + 1 < right)
		{
			s.push(p + 1);
			s.push(right);
		}
	}
}

int main()
{
	int arr[5] = { 3, 2, 6, 7, 1 };
	Quick(0, 4, arr);
	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";
	return 0;
}

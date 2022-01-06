#include <iostream>
using namespace std;

class Node
{
public:
	Node* pPre;
	Node* pNext;
	int data;
	Node()
	{
		this->data = -1;
		this->pNext = NULL;
		this->pPre = NULL;
	}
};
void AddNode(Node* pHead, int idata);

int main()
{
	Node* pHead = new Node;
	pHead->pPre = pHead;
	pHead->pNext = pHead;
	AddNode(pHead, 1);
	AddNode(pHead, 2);
	AddNode(pHead, 3);
	AddNode(pHead, 4);
	return 0;
}

void AddNode(Node* pHead, int idata)
{
	if (pHead == NULL)
		return;
	Node* t = new Node;
	t->data = idata;
	t->pNext = pHead;
	t->pPre = pHead->pPre;
	pHead->pPre->pNext = t;
	pHead->pPre = t;
}
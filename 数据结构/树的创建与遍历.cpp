//#include <iostream>
//using namespace std;
//#define type char
//
//class Node* Createtree(Node* root);
//void Preorder(Node* Head);
//void Midorder(Node* Head);
//void Postorder(Node* Head);
//
//class Node
//{
//public:
//	class Node* pleft;
//	class Node* pright;
//	type data;
//	Node()
//	{
//		this->pleft = NULL;
//		this->pright = NULL;
//		this->data = '#';
//	}
//};
//
//int main()
//{
//	Node* root = new Node;
//	root = Createtree(root);
//
//	Preorder(root);
//	cout << endl;
//	Midorder(root);
//	cout << endl;
//	Postorder(root);
//
//	delete root;
//	root = NULL;
//	return 0;
//}
//
//class Node* Createtree(Node* root)
//{
//	type idata;
//	cout << "Enter data: " << endl;
//	cin >> idata;
//	if (idata == '#')
//		return NULL;
//	else
//	{
//		root = new Node;
//		root->data = idata;
//		root->pleft = Createtree(root->pleft);
//		root->pright = Createtree(root->pright);
//	}
//	return root;
//}
//
//void Preorder(Node* Head)
//{
//	if (Head == NULL)
//		return;
//	cout << Head->data << " ";
//	Preorder(Head->pleft);
//	Preorder(Head->pright);
//}
//
//void Midorder(Node* Head)
//{
//	if (Head == NULL)
//		return;
//
//	Midorder(Head->pleft);
//	cout << Head->data << " ";
//	Midorder(Head->pright);
//}
//
//void Postorder(Node* Head)
//{
//	if (Head == NULL)
//		return;
//
//	Postorder(Head->pleft);
//	Postorder(Head->pright);
//	cout << Head->data << " ";
//}
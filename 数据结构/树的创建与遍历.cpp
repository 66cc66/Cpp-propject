#include <iostream>
#include<stack>
#include<queue>
using namespace std;
#define type char

class Node* Createtree(Node* root);
void Preorder(Node* Head);
void Midorder(Node* Head);
void Postorder(Node* Head);
void nonrecur_Pre(Node* root);
void nonrecur_Mid(Node* root);
void nonrecur_Post(Node* root);
void Layer(Node* root);

class Node
{
public:
	class Node* pleft;
	class Node* pright;
	type data;
	int flag;
	Node()
	{
		this->pleft = NULL;
		this->pright = NULL;
		this->data = '#';
		this->flag = 0;
	}
};

int main()
{
	Node* root = new Node;
	root = Createtree(root);

	//Preorder(root);
	nonrecur_Pre(root);
	cout << endl;
	//Midorder(root);
	nonrecur_Mid(root);
	cout << endl;
	//Postorder(root);
	nonrecur_Post(root);
	cout << endl;
	Layer(root);
	delete root;
	root = NULL;
	return 0;
}

class Node* Createtree(Node* root)
{
	type idata;
	cout << "Enter data: " << endl;
	cin >> idata;
	if (idata == '#')
		return NULL;
	else
	{
		root = new Node;
		root->data = idata;
		root->pleft = Createtree(root->pleft);
		root->pright = Createtree(root->pright);
	}
	return root;
}

void Preorder(Node* Head)
{
	if (Head == NULL)
		return;
	cout << Head->data << " ";
	Preorder(Head->pleft);
	Preorder(Head->pright);
}

void Midorder(Node* Head)
{
	if (Head == NULL)
		return;

	Midorder(Head->pleft);
	cout << Head->data << " ";
	Midorder(Head->pright);
}

void Postorder(Node* Head)
{
	if (Head == NULL)
		return;

	Postorder(Head->pleft);
	Postorder(Head->pright);
	cout << Head->data << " ";
}

void nonrecur_Pre(Node* root)
{
	if (root == NULL)
		return;
	stack<Node*> st;
	while (root || !st.empty())
	{
		if (root)
		{
			cout << root->data << " ";
			st.push(root);
			root = root->pleft;
		}
		else
		{
			root = st.top();
			st.pop();
			root = root->pright;
		}
	}
}

void nonrecur_Mid(Node* root)
{
	if (root == NULL)
		return;
	stack<Node*> st;
	while (root || !st.empty())
	{
		if (root)
		{
			st.push(root);
			root = root->pleft;
		}
		else
		{
			root = st.top();
			cout << root->data << " ";
			st.pop();
			root = root->pright;
		}
	}
}

void nonrecur_Post(Node* root)
{
	if (root == NULL)
		return;
	stack<Node*> st;
	while (root || !st.empty())
	{
		if (root)//遍历到最左边的节点
		{
			st.push(root);
			root = root->pleft;
		}
		else
		{
			//出栈前，判断栈顶元素是否有右子树和是否已被访问过，有且没有给访问过就入栈
			Node* Top = st.top();
			if (Top->pright && Top->pright->flag == 0)
			{
				Top = Top->pright;
				st.push(Top);
				root = Top->pleft;
			}
			else
			{
				//Top = st.top();
				st.pop();
				cout << Top->data << " ";
				Top->flag = 1;//访问过了
			}
		}
	}
}

void Layer(Node* root)
{
	if (root == NULL)
		return;
	queue<Node*> q;
	q.push(root);
	while (!q.empty())
	{
		//将根节点入队
		Node* temp = q.front();
		cout << temp->data << " ";
		//访问后出队
		q.pop();
		//判断是否有子节点，有就将他入队
		if (temp->pleft)
			q.push(temp->pleft);
		if (temp->pright)
			q.push(temp->pright);
	}
	cout << endl;
}

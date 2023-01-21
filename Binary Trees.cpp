#include<iostream>
#include<queue>
using namespace std;
class Node
{
	public:
		int data;
		Node*left;
		Node*right;
	Node(int d)
	{
		this->data=d;
		this->left=NULL;
		this->right=NULL;
		}	
};
Node* buildtree(Node*&root)
{
	cout<<"Enter the data"<<endl;
	int data;
	cin>>data;
	root=new Node(data);
	if(data==0)
	{
		return NULL;
	}
	cout<<"Enter data for insertion in left of"<<data<<endl;
	root->left=buildtree(root->left);
	cout<<"Enter data for insertion in right of"<<data<<endl;
	root->right=buildtree(root->right);
	return root;
	
}
void levelOrderTraversal(Node*&root)
{
	queue<Node*>q;
	q.push(root);
	while(!q.empty())
	{
		Node*temp=q.front();
		cout<<temp->data<<" ";
		q.pop();
	
	if(temp->left)
	{
		q.push(temp->left);
	}
	if(temp->right)
	{
		q.push(temp->right);
	}
}
}

int main()
{
	Node*root=NULL;
	root=buildtree(root);
	cout<<"Printing the level order triversal"<<endl;
	levelOrderTraversal(root);
	cout<<"Inorder triversal is"<<endl;
//	inorder(root);
}

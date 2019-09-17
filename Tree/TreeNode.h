#include<iostream>
using namespace std;

template<class T>
class TreeNode
{
	private:
		T data;
		TreeNode *left;
		TreeNode *right;
	public:
		T GetData();
		void SetData(T);

		TreeNode* GetLeft();
		void SetLeft(TreeNode*);

		TreeNode* GetRight();
		void SetRight(TreeNode*);

	
};

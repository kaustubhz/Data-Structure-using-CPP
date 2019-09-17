#include"TreeNode.h"

template <class T>
class BST
{
	private:
		TreeNode<T> *root;
		int count;
	public:
		BST();
		~BST();
		int GetCount();
		void SetCount(int);
		TreeNode<T>* GetRoot();
		bool Insert(T ele);
		static void InOrder(TreeNode<T>*);
		static void PreOrder(TreeNode<T>*);
		static void PostOrder(TreeNode<T>*);
		static void FindMinimum(TreeNode<T>*);
		static void FindMaximum(TreeNode<T>*);
		static void Delete(TreeNode<T>*);

		bool SearchInTree(T);

};

#include "Trees.h"

bool TreeSearch::isEmpty()
{
	if (root == NULL)
		return true;
	else
		return false;
}

void TreeSearch::insert(Book b1)
{
	tree* t = new tree;
	tree* parent;
	t->book = b1;
	t->left = NULL;
	t->right = NULL;
	parent = NULL;

	if (isEmpty() == true)
	{
		root = t;
	}
	else
	{
		tree* curr;
		curr = root;
		/*while (1)
		{
			if (t->book.get_title() > curr->book.get_title())
			{
				curr = curr->right;
			}
			else
			{
				curr = curr->left;
			}
			curr->book.set_title("Empty");
			if (t->book.get_title() > curr->book.get_title())
			{
				if (curr->right = NULL)
				{
					curr->right = t;
					break;
				}
			}
			else
			{
				if (curr->left = NULL)
				{
					curr->left = t;
					break;
				}*/
				while (curr != NULL)
				{
				parent = curr;
				if (t->book.get_title() > curr->book.get_title())
				{
				curr = curr->right;
				}
				else
				{
				curr = curr->left;
				}
				}
				if (t->book.get_title() < parent->book.get_title())
				{
				parent->left = t;
				}
				else
				{
				parent->right = t;
				}
				}
			}

void TreeSearch::search_author(string key)
{
	bool found = false;
	if (isEmpty() == true)
	{
		cout << " This Tree is empty! " << endl;
		return;
	}
	tree* curr;
	curr = root;
	while (curr != NULL)
	{
		if (curr->book.get_title() == key)
		{
			found = true;
			cout << "This book is present.\n Its info is." << endl;
			break;
		}
		else
		{
			if (key > curr->book.get_title())
			{
				curr = curr->right;
			}
			else
			{
				curr = curr->left;
			}
		}
	}
	if (found == false)
	{
		cout << " Data not found! " << endl;
		return;
	}
}

void TreeSearch::display(tree* curr)
{
	cout << curr->book.get_title() << endl;
	cout << curr->book.get_author() << endl;
	cout << curr->book.get_isbn() << endl;
	cout << curr->book.get_check() << endl;
	if (curr->left != NULL)
	{
		return TreeSearch::display(curr->left);
	}
	if (curr->right != NULL)
	{
		return TreeSearch::display(curr->right);
	}
}

void TreeSearch::NoOfElem(tree *curr) 
{
	curr = root;
	static int count = 1;
	if (curr->left != NULL)   
	{
		count++;
		return NoOfElem(curr->left);
	}
	if (curr->right != NULL)
	{
		count++;
		return NoOfElem(curr->right);
	}
}
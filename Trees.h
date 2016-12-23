#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

class TreeSearch : Book
{
private:
	struct tree
	{
		tree* left;
		tree* right;
		Book book;
	};
public:
	tree* root;
	TreeSearch()
	{
		root = NULL;
	}
	bool isEmpty();
	void insert(Book);
	void search_author(string);
	void display(tree*);
	void NoOfElem(tree*);
	
};
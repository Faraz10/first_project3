#include "Trees.h"

using namespace std;

int main()
{
	TreeSearch t1;
	Book b1,b2,b3;
	b1.set_values();
	b2.set_values();
	b3.set_values();
	t1.insert(b1);
	t1.insert(b2);
	t1.insert(b3);
	t1.display(t1.root);
	string search;
	cin >> search;
	t1.search_author(search);

	return 0;
}
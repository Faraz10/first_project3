#include "Book.h"

void Book::set_author(string a)
{
		author = a;
}

void Book::set_title(string t)
{
		title = t;
}

void Book::set_isbn(int i)
{
	ISBN = i;
}

void Book::set_check(bool c)
{
	checked = c;
}

void Book::set_values()
{
	string a, t;
	int i;
	bool c;
	cout << "Enter title" << endl;
	cin >> t;
	set_title(t);

	cout << "Enter author" << endl;
	cin >> a;
	set_author(a);

	cout << "Enter isbn" << endl;
	cin >> i;
	set_isbn(i);

	cout << "Enter check status" << endl;
	cin >> c;
	set_check(c);
}

string Book::get_author()
{
		return author;
}

string Book::get_title()
{
		return title;
}

int Book::get_isbn()
{
	return ISBN;
}

bool Book::get_check()
{
	return checked;
}

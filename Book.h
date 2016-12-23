#include <iostream>
#include <string>
using namespace std;

class Book {
private:
	string author, title;
	bool checked;
	int ISBN;
public:
	Book()
	{
		author = "No one";
		title = "Nothing";
		checked = false;
		ISBN = 0;
	}
	Book(string &a, string &t, int i, bool c = false) {
		author = a;
		title = t;
		checked = c;
		ISBN = i;
	}
	void set_author(string);
	void set_title(string);
	void set_isbn(int);
	void set_check(bool);
	string get_author();
	string get_title();
	int get_isbn();
	bool get_check();
	void set_values();
};
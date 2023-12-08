// list.h -- List 클래스 선언
typedef double Item;

class List
{
private:
	enum {MAX = 10};
	Item * items;
	int top, max;

public:
	List(int num = MAX);
	~List();
	bool add(Item &);
	bool isempty() const;
	bool isfull() const;
	void visit(void (*pf)(Item &));
	void show();
};

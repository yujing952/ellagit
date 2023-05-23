#include <iostream>
#include<cstring>
using namespace std;


class Node
{
	public:
		int data;  // data filed  
		Node *next; // pointer filed
};

class LinkList
{
	public:
		LinkList();
		LinkList(const LinkList& obj);
		~LinkList();
		
	private:
		Node *head;			
};

LinkList::LinkList()
{
	cout << " Constructor called " << endl;
	head = new Node;
	head->data = 0;
	head->next = NULL;	
}

LinkList::LinkList(const LinkList& obj)
{
	cout << "Copy Constructor called " << endl;
	this->head = new Node;
	this->head->data = obj.head->data;
	this->head->next = obj.head->next;
	
}
LinkList::~LinkList()
{
	cout << " Destructor called " << endl;
	delete head;
}

int main()
{
	LinkList link1;
	LinkList link2(link1);
	
	
    return 0;
}

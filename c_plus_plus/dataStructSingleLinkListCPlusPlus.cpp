#include <iostream>
using namespace std;

typedef int DataType;

// Node class
class Node
{
	public:
		int data;
		Node* next;
};

// single LinkList class 
class LinkList
{
	public:
		LinkList();
		~LinkList();
		
		void createLinkList(int n);  //create a single LinkList
		void travelLinkList();  // LinkList
		int getLinkListLength();  // get the length of LinkList
		bool isEmpty();  // verify the LinkList is empty or not
		
		Node* findNode(DataType data); // find the node of LinkList
		void insertLinkListAtEnd(DataType data); // insert data at the end
		void insertLinkListAtIndex(DataType data, int index); // insert data at the index point
		void insertLinkListAtHead(DataType data); // insert the value at the head
		
		void deleteLinkListAll(); // delete all data
		void deleteLinkListAtPoint( DataType data); // delete the appointed data
		void deleteLinkListAtIndex(int index); //delete the data on appointed index
		void deleteLinkListAtHead(); // delete data on the head
		
		void reverseLinkList(); // reverse all data of LinkList
		
	private:
		Node* head;
			
};

// init single LinkList (constructor)
LinkList::LinkList()
{
	head = new Node;
	head->data = 0;
	head->next = NULL;
}

// destruct single LinkList
LinkList::~LinkList()
{
	delete head;	
}

// create a LinkList
void LinkList::createLinkList(int n)
{
	Node *pnew,*ptemp;
	ptemp = head;
	if(n < 0)
	{
		cout << "the node number is wrong" << endl;
		exit(0);		
	}
	
	for( int i = 0; i < n; i++)
	{
		pnew = new Node;
		cout << "please input " << i+1 << "value: " ;
		cin >> pnew->data;
		pnew->next = NULL;
		ptemp->next = pnew;
		ptemp = pnew;
	}
	
}


int main(void)
{
	LinkList singlelink;  // create a object for class LinkList
	int i;
	cout << "0. exit \n1. create a single LinkList\n";
	do 
	{
		cout << "please input the execution Num: ";
		cin >> i;
		
		switch(i)
		{
			case 1:
				int n;
				cout << "please input the lenght of Single LinkList: ";
				cin >> n;
				singlelink.createLinkList(n);
				break;
				
			default:
				break;
		}

	}while(i != 0);
	
	system("pause");
	
	return 0;
}
